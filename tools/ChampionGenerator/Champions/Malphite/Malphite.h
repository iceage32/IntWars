#ifndef _CHAMPION_MALPHITE_H
#define _CHAMPION_MALPHITE_H

#include "Champion.h"
#include "SeismicShard.h"
#include "BrutalStrikes.h"
#include "GroundSlam.h"
#include "UnstoppableForce.h"

class Malphite : public Champion {

    public:
    Malphite(Map* map, uint32 id) : Champion("Malphite", map, id) {
        spells.push_back(new SeismicShard(this));
        spells.push_back(new BrutalStrikes(this));
        spells.push_back(new GroundSlam(this));
        spells.push_back(new UnstoppableForce(this));

        stats->setCurrentHealth(423.0f);
        stats->setMaxHealth(423.0f);
        stats->setCurrentMana(215.0f);
        stats->setMaxMana(215.0f);
        stats->setBaseAd(56.3f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(335.0f);
        stats->setArmor(22.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.45f);
        stats->setMp5(6.4f);
    }

};

#endif