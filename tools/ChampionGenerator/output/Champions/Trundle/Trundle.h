#ifndef _CHAMPION_TRUNDLE_H
#define _CHAMPION_TRUNDLE_H

#include "Champion.h"
#include "Chomp.h"
#include "FrozenDomain.h"
#include "PillarofIce.h"
#include "Subjugate.h"

class Trundle : public Champion {

    public:
    Trundle(Map* map, uint32 id) : Champion("Trundle", map, id) {
        spells.push_back(new Chomp(this));
        spells.push_back(new FrozenDomain(this));
        spells.push_back(new PillarofIce(this));
        spells.push_back(new Subjugate(this));

        stats->setCurrentHealth(455.0f);
        stats->setMaxHealth(455.0f);
        stats->setCurrentMana(206.0f);
        stats->setMaxMana(206.0f);
        stats->setBaseAd(55.0f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(350.0f);
        stats->setArmor(23.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(8.0f);
        stats->setMp5(6.5f);
    }

};

#endif