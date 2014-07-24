#ifndef _CHAMPION_JAX_H
#define _CHAMPION_JAX_H

#include "Champion.h"
#include "LeapStrike.h"
#include "Empower.h"
#include "CounterStrike.h"
#include "GrandmastersMight.h"

class Jax : public Champion {

    public:
    Jax(Map* map, uint32 id) : Champion("Jax", map, id) {
        spells.push_back(new LeapStrike(this));
        spells.push_back(new Empower(this));
        spells.push_back(new CounterStrike(this));
        spells.push_back(new GrandmastersMight(this));

        stats->setCurrentHealth(450.0f);
        stats->setMaxHealth(450.0f);
        stats->setCurrentMana(230.0f);
        stats->setMaxMana(230.0f);
        stats->setBaseAd(56.3f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(350.0f);
        stats->setArmor(22.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.45f);
        stats->setMp5(6.4f);
    }

};

#endif