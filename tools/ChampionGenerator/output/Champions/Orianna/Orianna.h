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

        stats->setCurrentHealth(385.0f);
        stats->setMaxHealth(385.0f);
        stats->setCurrentMana(250.0f);
        stats->setMaxMana(250.0f);
        stats->setBaseAd(44.0f);
        stats->setRange(525.0f);
        stats->setMovementSpeed(325.0f);
        stats->setArmor(12.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(5.95f);
        stats->setMp5(7.0f);
    }

};

#endif