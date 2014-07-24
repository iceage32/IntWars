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

        stats->setCurrentHealth(440.0f);
        stats->setMaxHealth(440.0f);
        stats->setCurrentMana(220.0f);
        stats->setMaxMana(220.0f);
        stats->setBaseAd(50.0f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(350.0f);
        stats->setArmor(20.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.5f);
        stats->setMp5(7.0f);
    }

};

#endif