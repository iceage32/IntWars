#ifndef _CHAMPION_SHYVANA_H
#define _CHAMPION_SHYVANA_H

#include "Champion.h"
#include "TwinBite.h"
#include "Burnout.h"
#include "FlameBreath.h"
#include "DragonsDescent.h"

class Shyvana : public Champion {

    public:
    Shyvana(Map* map, uint32 id) : Champion("Shyvana", map, id) {
        spells.push_back(new TwinBite(this));
        spells.push_back(new Burnout(this));
        spells.push_back(new FlameBreath(this));
        spells.push_back(new DragonsDescent(this));

        stats->setCurrentHealth(435.0f);
        stats->setMaxHealth(435.0f);
        stats->setCurrentMana(100.0f);
        stats->setMaxMana(100.0f);
        stats->setBaseAd(55.0f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(350.0f);
        stats->setArmor(22.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.25f);
        stats->setMp5(0.0f);
    }

};

#endif