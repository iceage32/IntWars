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

        stats->setCurrentHealth(380f);
        stats->setMaxHealth(380f);
        stats->setCurrentMana(260f);
        stats->setMaxMana(260f);
        stats->setBaseAd(48.6f);
        stats->setRange(600f);
        stats->setMovementSpeed(335f);
        stats->setArmor(10.75f);
        stats->setMagicArmor(30f);
        stats->setHp5(4.6f);
        stats->setMp5(6.95f);
    }

};

#endif