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

        stats->setCurrentHealth(450f);
        stats->setMaxHealth(450f);
        stats->setCurrentMana(100f);
        stats->setMaxMana(100f);
        stats->setBaseAd(55.66f);
        stats->setRange(125f);
        stats->setMovementSpeed(345f);
        stats->setArmor(20f);
        stats->setMagicArmor(30f);
        stats->setHp5(7f);
        stats->setMp5(0f);
    }

};

#endif