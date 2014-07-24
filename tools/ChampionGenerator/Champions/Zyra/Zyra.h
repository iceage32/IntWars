#ifndef _CHAMPION_ZYRA_H
#define _CHAMPION_ZYRA_H

#include "Champion.h"
#include "DeadlyBloom.h"
#include "RampantGrowth.h"
#include "GraspingRoots.h"
#include "Stranglethorns.h"

class Zyra : public Champion {

    public:
    Zyra(Map* map, uint32 id) : Champion("Zyra", map, id) {
        spells.push_back(new DeadlyBloom(this));
        spells.push_back(new RampantGrowth(this));
        spells.push_back(new GraspingRoots(this));
        spells.push_back(new Stranglethorns(this));

        stats->setCurrentHealth(355f);
        stats->setMaxHealth(355f);
        stats->setCurrentMana(250f);
        stats->setMaxMana(250f);
        stats->setBaseAd(50f);
        stats->setRange(575f);
        stats->setMovementSpeed(325f);
        stats->setArmor(15f);
        stats->setMagicArmor(30f);
        stats->setHp5(4.85f);
        stats->setMp5(7.1f);
    }

};

#endif