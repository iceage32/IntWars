#ifndef _CHAMPION_FIDDLESTICKS_H
#define _CHAMPION_FIDDLESTICKS_H

#include "Champion.h"
#include "Terrify.h"
#include "Drain.h"
#include "DarkWind.h"
#include "Crowstorm.h"

class Fiddlesticks : public Champion {

    public:
    Fiddlesticks(Map* map, uint32 id) : Champion("Fiddlesticks", map, id) {
        spells.push_back(new Terrify(this));
        spells.push_back(new Drain(this));
        spells.push_back(new DarkWind(this));
        spells.push_back(new Crowstorm(this));

        stats->setCurrentHealth(390f);
        stats->setMaxHealth(390f);
        stats->setCurrentMana(251f);
        stats->setMaxMana(251f);
        stats->setBaseAd(45.95f);
        stats->setRange(480f);
        stats->setMovementSpeed(335f);
        stats->setArmor(15f);
        stats->setMagicArmor(30f);
        stats->setHp5(4.6f);
        stats->setMp5(6.9f);
    }

};

#endif