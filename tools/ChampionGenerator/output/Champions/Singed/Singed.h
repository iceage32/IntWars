#ifndef _CHAMPION_SINGED_H
#define _CHAMPION_SINGED_H

#include "Champion.h"
#include "PoisonTrail.h"
#include "MegaAdhesive.h"
#include "Fling.h"
#include "InsanityPotion.h"

class Singed : public Champion {

    public:
    Singed(Map* map, uint32 id) : Champion("Singed", map, id) {
        spells.push_back(new PoisonTrail(this));
        spells.push_back(new MegaAdhesive(this));
        spells.push_back(new Fling(this));
        spells.push_back(new InsanityPotion(this));

        stats->setCurrentHealth(405.0f);
        stats->setMaxHealth(405.0f);
        stats->setCurrentMana(215.0f);
        stats->setMaxMana(215.0f);
        stats->setBaseAd(56.65f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(345.0f);
        stats->setArmor(22.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.1f);
        stats->setMp5(6.6f);
    }

};

#endif