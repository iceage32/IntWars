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

        stats->setCurrentHealth(435f);
        stats->setMaxHealth(435f);
        stats->setCurrentMana(100f);
        stats->setMaxMana(100f);
        stats->setBaseAd(55f);
        stats->setRange(125f);
        stats->setMovementSpeed(350f);
        stats->setArmor(22f);
        stats->setMagicArmor(30f);
        stats->setHp5(7.25f);
        stats->setMp5(0f);
    }

};

#endif