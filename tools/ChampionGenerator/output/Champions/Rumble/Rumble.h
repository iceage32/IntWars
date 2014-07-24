#ifndef _CHAMPION_RUMBLE_H
#define _CHAMPION_RUMBLE_H

#include "Champion.h"
#include "Flamespitter.h"
#include "ScrapShield.h"
#include "ElectroHarpoon.h"
#include "TheEqualizer.h"

class Rumble : public Champion {

    public:
    Rumble(Map* map, uint32 id) : Champion("Rumble", map, id) {
        spells.push_back(new Flamespitter(this));
        spells.push_back(new ScrapShield(this));
        spells.push_back(new ElectroHarpoon(this));
        spells.push_back(new TheEqualizer(this));

        stats->setCurrentHealth(450.0f);
        stats->setMaxHealth(450.0f);
        stats->setCurrentMana(100.0f);
        stats->setMaxMana(100.0f);
        stats->setBaseAd(55.66f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(345.0f);
        stats->setArmor(20.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.0f);
        stats->setMp5(0.0f);
    }

};

#endif