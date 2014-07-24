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

        stats->setCurrentHealth(423f);
        stats->setMaxHealth(423f);
        stats->setCurrentMana(215f);
        stats->setMaxMana(215f);
        stats->setBaseAd(56.3f);
        stats->setRange(125f);
        stats->setMovementSpeed(335f);
        stats->setArmor(22f);
        stats->setMagicArmor(30f);
        stats->setHp5(7.45f);
        stats->setMp5(6.4f);
    }

};

#endif