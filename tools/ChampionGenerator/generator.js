var RIOT_API_KEY = 'e12060d5-bb74-4ef3-8b97-ff8a52746626'; //Go to https://developer.riotgames.com/ to get your riot development key

var ChampionString = '#ifndef _CHAMPION_{:championNameUpper:}_H\r\n\
#define _CHAMPION_{:championNameUpper:}_H\r\n\
\r\n\
#include "Champion.h"\r\n\
{:includeSpellList:}\
\r\n\
class {:championName:} : public Champion {\r\n\
\r\n\
    public:\r\n\
    {:championName:}(Map* map, uint32 id) : Champion("{:championName:}", map, id) {\r\n\
{:spellList:}\
\r\n\
        stats->setCurrentHealth({:currentHP:}f);\r\n\
        stats->setMaxHealth({:maxHP:}f);\r\n\
        stats->setCurrentMana({:currentMP:}f);\r\n\
        stats->setMaxMana({:maxMP:}f);\r\n\
        stats->setBaseAd({:baseAD:}f);\r\n\
        stats->setRange({:range:}f);\r\n\
        stats->setMovementSpeed({:moveSpeed:}f);\r\n\
        stats->setArmor({:armor:}f);\r\n\
        stats->setMagicArmor({:magicres:}f);\r\n\
        stats->setHp5({:HPper5:}f);\r\n\
        stats->setMp5({:MPPer5:}f);\r\n\
    }\r\n\
\r\n\
};\r\n\
\r\n\
#endif';
var SpellString = '#ifndef _SPELL_{:spellNameUpper:}_H\r\n\
#define _SPELL_{:spellNameUpper:}_H\r\n\
\r\n\
#include "Spell.h"\r\n\
\r\n\
#define ID_{:spellNameUpper:} 0x00000000\r\n\
\r\n\
class {:spellName:} : public Spell {\r\n\
    private:\r\n\
    float damage[5];\r\n\
\r\n\
    public:\r\n\
    {:spellName:}(Champion* owner) : Spell(ID_{:spellNameUpper:}, owner, 0.25f, 0) {\r\n\
        cooldown[0] = {:cd1:}f;\r\n\
        cooldown[1] = {:cd2:}f;\r\n\
        cooldown[2] = {:cd3:}f;\r\n\
        cooldown[3] = {:cd4:}f;\r\n\
        cooldown[4] = {:cd5:}f;\r\n\
\r\n\
        cost[0] = {:cost1:};\r\n\
        cost[1] = {:cost2:};\r\n\
        cost[2] = {:cost3:};\r\n\
        cost[3] = {:cost4:};\r\n\
        cost[4] = {:cost5:};\r\n\
\r\n\
        damage[0] = {:damage1:};\r\n\
        damage[1] = {:damage1:};\r\n\
        damage[2] = {:damage1:};\r\n\
        damage[3] = {:damage1:};\r\n\
        damage[4] = {:damage1:};\r\n\
    }\r\n\
\r\n\
    /**\r\n\
     * TODO : create the projectile here, and notify it to the map/game\r\n\
     */\r\n\
    virtual bool cast(float x, float y, Unit* u = 0) {\r\n\
        return Spell::cast(x, y, u);\r\n\
    }\r\n\
\r\n\
    /**\r\n\
     * This is called when the spell is finished casting, and we\'re supposed to\r\n\
     * create the projectile\r\n\
     */\r\n\
    virtual void finishCasting();\r\n\
\r\n\
    /**\r\n\
     * This will be called when spell projectile hits a unit\r\n\
     */\r\n\
    virtual void applyEffects(Target* t, Projectile* p = 0);\r\n\
\r\n\
\r\n\
};\r\n\
\r\n\
#endif';

//begin script
var http = require('http');
var fs = require('fs');

console.log("\033[1;32mIntWards Champion Generator By IcEaGe\033[1;37m");
console.log("E-mail: zsozso5800@gmail.com");

var RIOT_API_URL = 'http://na.api.pvp.net/api/lol/static-data/na/v1.2/champion?champData=all&api_key=' + RIOT_API_KEY;

console.log("Getting champion data from datadragon...");

var champions = "";
http.get(RIOT_API_URL, function(res) {
    res.on("data", function(chunk) {
        champions += chunk;
    });
    res.on("end", function() {
        console.log('Successfully fetched data. Starting champion creation.');
        champions = JSON.parse(champions);
        createChampions();
    });
}).on('error', function(e) {
    console.log("An error occured while fetching data: " + e.message);
});

function createChampions() {
    //create champions dir
    if(!fs.existsSync(__dirname + "/Champions/")) {
        fs.mkdirSync(__dirname + "/Champions/");
        console.log("Created 'Champions' directory.");
    }

    //loop trough champions
    for(var champion in champions.data) {
        var c = champions.data[champion];

        //create folder for champion
        if(!fs.existsSync(__dirname + "/Champions/" + c.key + "/")) {
            fs.mkdirSync(__dirname + "/Champions/" + c.key + "/");
            console.log("Created 'Champions/" + c.key + "' directory.");
        }
        //create spells

        //used for champion file when linking spells
        spellList = "";
        includeSpellList = "";

        for(var spell in c.spells) {
            var s = c.spells[spell];

            spellList += '        spells.push_back(new ' + toAlphaNoSpaces(s.name) + '(this));\r\n';
            includeSpellList += '#include "' + toAlphaNoSpaces(s.name) + '.h"\r\n';

            //generate file contents
            var spellFile = new stringBuilder(SpellString);
            spellFile.bindParam('{:spellName:}', toAlphaNoSpaces(s.name));
            spellFile.bindParam('{:spellNameUpper:}', toAlphaNoSpaces(s.name).toUpperCase());

            spellFile.bindParam('{:cd1:}', (typeof s.cooldown[0] != 'undefined') ? s.cooldown[0] : 0);
            spellFile.bindParam('{:cd2:}', (typeof s.cooldown[1] != 'undefined') ? s.cooldown[1] : 0);
            spellFile.bindParam('{:cd3:}', (typeof s.cooldown[2] != 'undefined') ? s.cooldown[2] : 0);
            spellFile.bindParam('{:cd4:}', (typeof s.cooldown[3] != 'undefined') ? s.cooldown[3] : 0);
            spellFile.bindParam('{:cd5:}', (typeof s.cooldown[4] != 'undefined') ? s.cooldown[4] : 0);

            spellFile.bindParam('{:cost1:}', (typeof s.cost[0] != 'undefined') ? s.cost[0] : 0);
            spellFile.bindParam('{:cost2:}', (typeof s.cost[1] != 'undefined') ? s.cost[1] : 0);
            spellFile.bindParam('{:cost3:}', (typeof s.cost[2] != 'undefined') ? s.cost[2] : 0);
            spellFile.bindParam('{:cost4:}', (typeof s.cost[3] != 'undefined') ? s.cost[3] : 0);
            spellFile.bindParam('{:cost5:}', (typeof s.cost[4] != 'undefined') ? s.cost[4] : 0);

            spellFile.bindParam('{:damage1:}', (typeof s.effect[0][0] != 'undefined') ? s.effect[0][0] : 0);
            spellFile.bindParam('{:damage2:}', (typeof s.effect[0][1] != 'undefined') ? s.effect[0][1] : 0);
            spellFile.bindParam('{:damage3:}', (typeof s.effect[0][2] != 'undefined') ? s.effect[0][2] : 0);
            spellFile.bindParam('{:damage4:}', (typeof s.effect[0][3] != 'undefined') ? s.effect[0][3] : 0);
            spellFile.bindParam('{:damage5:}', (typeof s.effect[0][4] != 'undefined') ? s.effect[0][4] : 0);

            fs.writeFileSync(__dirname + "/Champions/" + c.key + "/" + toAlphaNoSpaces(s.name) + ".h", spellFile.get(), {'flags': 'w+'});
            console.log("Successfully created spell file for spell '" + s.name + "'");
        }

        //create championname.h
        var championFile = new stringBuilder(ChampionString);

        championFile.bindParam('{:championName:}', toAlphaNoSpaces(c.name));
        championFile.bindParam('{:championNameUpper:}', toAlphaNoSpaces(c.name).toUpperCase());

        championFile.bindParam('{:currentHP:}', c.stats.hp);
        championFile.bindParam('{:maxHP:}', c.stats.hp);
        championFile.bindParam('{:currentMP:}', c.stats.mp);
        championFile.bindParam('{:maxMP:}', c.stats.mp);
        championFile.bindParam('{:baseAD:}', c.stats.attackdamage);
        championFile.bindParam('{:range:}', c.stats.attackrange);
        championFile.bindParam('{:moveSpeed:}', c.stats.movespeed);
        championFile.bindParam('{:armor:}', c.stats.armor);
        championFile.bindParam('{:magicres:}', c.stats.spellblock);
        championFile.bindParam('{:HPper5:}', c.stats.hpregen);
        championFile.bindParam('{:MPPer5:}', c.stats.mpregen);

        championFile.bindParam('{:spellList:}', spellList);
        championFile.bindParam('{:includeSpellList:}', includeSpellList);

        fs.writeFileSync(__dirname + "/Champions/" + c.key + "/" + toAlphaNoSpaces(c.name) + ".h", championFile.get(), {'flags': 'w+'});
        console.log("Successfully created champion file for champion '" + c.name + "'");
    }
}
function toAlpha(str) {
    return str.replace(/[^a-zA-Z ]/g, "")
}
function toAlphaNoSpaces(str) {
    return str.replace(/[^a-zA-Z]/g, "")
}

//Simple stringbuilder
function stringBuilder(string) {
    this.s=string;
    this.fs = string;
}
stringBuilder.prototype.bindParam = function(paramname, value) {
    this.fs = this.fs.replace(new RegExp(paramname, 'g'), value);
}
stringBuilder.prototype.get = function() {
    return this.fs
};