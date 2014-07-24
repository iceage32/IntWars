#ifndef _CHAMPION_XERATH_H
#define _CHAMPION_XERATH_H

#include "Champion.h"
#include "Arcanopulse.h"
#include "EyeofDestruction.h"
#include "ShockingOrb.h"
#include "RiteoftheArcane.h"

class Xerath : public Champion {

    public:
    Xerath(Map* map, uint32 id) : Champion("Xerath", map, id) {
        spells.push_back(new Arcanopulse(this));
        spells.push_back(new EyeofDestruction(this));
        spells.push_back(new ShockingOrb(this));
        spells.push_back(new RiteoftheArcane(this));

        stats->setCurrentHealth(380f);
        stats->setMaxHealth(380f);
        stats->setCurrentMana(238f);
        stats->setMaxMana(238f);
        stats->setBaseAd(51.66f);
        stats->setRange(525f);
        stats->setMovementSpeed(340f);
        stats->setArmor(16f);
        stats->setMagicArmor(30f);
        stats->setHp5(4.5f);
        stats->setMp5(6f);
    }

};

#endif