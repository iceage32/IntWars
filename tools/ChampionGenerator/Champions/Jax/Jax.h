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

        stats->setCurrentHealth(450f);
        stats->setMaxHealth(450f);
        stats->setCurrentMana(230f);
        stats->setMaxMana(230f);
        stats->setBaseAd(56.3f);
        stats->setRange(125f);
        stats->setMovementSpeed(350f);
        stats->setArmor(22f);
        stats->setMagicArmor(30f);
        stats->setHp5(7.45f);
        stats->setMp5(6.4f);
    }

};

#endif