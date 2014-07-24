#ifndef _CHAMPION_ORIANNA_H
#define _CHAMPION_ORIANNA_H

#include "Champion.h"
#include "CommandAttack.h"
#include "CommandDissonance.h"
#include "CommandProtect.h"
#include "CommandShockwave.h"

class Orianna : public Champion {

    public:
    Orianna(Map* map, uint32 id) : Champion("Orianna", map, id) {
        spells.push_back(new CommandAttack(this));
        spells.push_back(new CommandDissonance(this));
        spells.push_back(new CommandProtect(this));
        spells.push_back(new CommandShockwave(this));

        stats->setCurrentHealth(385f);
        stats->setMaxHealth(385f);
        stats->setCurrentMana(250f);
        stats->setMaxMana(250f);
        stats->setBaseAd(44f);
        stats->setRange(525f);
        stats->setMovementSpeed(325f);
        stats->setArmor(12f);
        stats->setMagicArmor(30f);
        stats->setHp5(5.95f);
        stats->setMp5(7f);
    }

};

#endif