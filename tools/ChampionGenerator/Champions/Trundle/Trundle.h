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

        stats->setCurrentHealth(455f);
        stats->setMaxHealth(455f);
        stats->setCurrentMana(206f);
        stats->setMaxMana(206f);
        stats->setBaseAd(55f);
        stats->setRange(125f);
        stats->setMovementSpeed(350f);
        stats->setArmor(23f);
        stats->setMagicArmor(30f);
        stats->setHp5(8f);
        stats->setMp5(6.5f);
    }

};

#endif