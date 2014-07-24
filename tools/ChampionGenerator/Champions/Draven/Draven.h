#ifndef _CHAMPION_DRAVEN_H
#define _CHAMPION_DRAVEN_H

#include "Champion.h"
#include "SpinningAxe.h"
#include "BloodRush.h"
#include "StandAside.h"
#include "WhirlingDeath.h"

class Draven : public Champion {

    public:
    Draven(Map* map, uint32 id) : Champion("Draven", map, id) {
        spells.push_back(new SpinningAxe(this));
        spells.push_back(new BloodRush(this));
        spells.push_back(new StandAside(this));
        spells.push_back(new WhirlingDeath(this));

        stats->setCurrentHealth(420.0f);
        stats->setMaxHealth(420.0f);
        stats->setCurrentMana(240.0f);
        stats->setMaxMana(240.0f);
        stats->setBaseAd(46.5f);
        stats->setRange(550.0f);
        stats->setMovementSpeed(330.0f);
        stats->setArmor(20.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(5.0f);
        stats->setMp5(6.95f);
    }

};

#endif