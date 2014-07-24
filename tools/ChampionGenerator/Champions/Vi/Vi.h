#ifndef _CHAMPION_VI_H
#define _CHAMPION_VI_H

#include "Champion.h"
#include "VaultBreaker.h"
#include "DentingBlows.h"
#include "ExcessiveForce.h"
#include "AssaultandBattery.h"

class Vi : public Champion {

    public:
    Vi(Map* map, uint32 id) : Champion("Vi", map, id) {
        spells.push_back(new VaultBreaker(this));
        spells.push_back(new DentingBlows(this));
        spells.push_back(new ExcessiveForce(this));
        spells.push_back(new AssaultandBattery(this));

        stats->setCurrentHealth(440f);
        stats->setMaxHealth(440f);
        stats->setCurrentMana(220f);
        stats->setMaxMana(220f);
        stats->setBaseAd(50f);
        stats->setRange(125f);
        stats->setMovementSpeed(350f);
        stats->setArmor(20f);
        stats->setMagicArmor(30f);
        stats->setHp5(7.5f);
        stats->setMp5(7f);
    }

};

#endif