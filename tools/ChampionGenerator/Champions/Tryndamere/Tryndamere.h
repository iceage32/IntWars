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

        stats->setCurrentHealth(461f);
        stats->setMaxHealth(461f);
        stats->setCurrentMana(100f);
        stats->setMaxMana(100f);
        stats->setBaseAd(56f);
        stats->setRange(125f);
        stats->setMovementSpeed(345f);
        stats->setArmor(18.9f);
        stats->setMagicArmor(30f);
        stats->setHp5(7f);
        stats->setMp5(0f);
    }

};

#endif