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

        stats->setCurrentHealth(380.0f);
        stats->setMaxHealth(380.0f);
        stats->setCurrentMana(238.0f);
        stats->setMaxMana(238.0f);
        stats->setBaseAd(51.66f);
        stats->setRange(525.0f);
        stats->setMovementSpeed(340.0f);
        stats->setArmor(16.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(4.5f);
        stats->setMp5(6.0f);
    }

};

#endif