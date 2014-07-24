#ifndef _CHAMPION_TRYNDAMERE_H
#define _CHAMPION_TRYNDAMERE_H

#include "Champion.h"
#include "Bloodlust.h"
#include "MockingShout.h"
#include "SpinningSlash.h"
#include "UndyingRage.h"

class Tryndamere : public Champion {

    public:
    Tryndamere(Map* map, uint32 id) : Champion("Tryndamere", map, id) {
        spells.push_back(new Bloodlust(this));
        spells.push_back(new MockingShout(this));
        spells.push_back(new SpinningSlash(this));
        spells.push_back(new UndyingRage(this));

        stats->setCurrentHealth(461.0f);
        stats->setMaxHealth(461.0f);
        stats->setCurrentMana(100.0f);
        stats->setMaxMana(100.0f);
        stats->setBaseAd(56.0f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(345.0f);
        stats->setArmor(18.9f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.0f);
        stats->setMp5(0.0f);
    }

};

#endif