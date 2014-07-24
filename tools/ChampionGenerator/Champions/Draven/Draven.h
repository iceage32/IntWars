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

        stats->setCurrentHealth(420f);
        stats->setMaxHealth(420f);
        stats->setCurrentMana(240f);
        stats->setMaxMana(240f);
        stats->setBaseAd(46.5f);
        stats->setRange(550f);
        stats->setMovementSpeed(330f);
        stats->setArmor(20f);
        stats->setMagicArmor(30f);
        stats->setHp5(5f);
        stats->setMp5(6.95f);
    }

};

#endif