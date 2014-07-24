#ifndef _CHAMPION_ZILEAN_H
#define _CHAMPION_ZILEAN_H

#include "Champion.h"
#include "TimeBomb.h"
#include "Rewind.h"
#include "TimeWarp.h"
#include "Chronoshift.h"

class Zilean : public Champion {

    public:
    Zilean(Map* map, uint32 id) : Champion("Zilean", map, id) {
        spells.push_back(new TimeBomb(this));
        spells.push_back(new Rewind(this));
        spells.push_back(new TimeWarp(this));
        spells.push_back(new Chronoshift(this));

        stats->setCurrentHealth(380.0f);
        stats->setMaxHealth(380.0f);
        stats->setCurrentMana(260.0f);
        stats->setMaxMana(260.0f);
        stats->setBaseAd(48.6f);
        stats->setRange(600.0f);
        stats->setMovementSpeed(335.0f);
        stats->setArmor(10.75f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(4.6f);
        stats->setMp5(6.95f);
    }

};

#endif