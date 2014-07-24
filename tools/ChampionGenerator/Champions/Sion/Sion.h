#ifndef _CHAMPION_SION_H
#define _CHAMPION_SION_H

#include "Champion.h"
#include "CrypticGaze.h"
#include "DeathsCaress.h"
#include "Enrage.h"
#include "Cannibalism.h"

class Sion : public Champion {

    public:
    Sion(Map* map, uint32 id) : Champion("Sion", map, id) {
        spells.push_back(new CrypticGaze(this));
        spells.push_back(new DeathsCaress(this));
        spells.push_back(new Enrage(this));
        spells.push_back(new Cannibalism(this));

        stats->setCurrentHealth(403f);
        stats->setMaxHealth(403f);
        stats->setCurrentMana(200f);
        stats->setMaxMana(200f);
        stats->setBaseAd(55.52f);
        stats->setRange(125f);
        stats->setMovementSpeed(345f);
        stats->setArmor(21.75f);
        stats->setMagicArmor(30f);
        stats->setHp5(7.9f);
        stats->setMp5(6.3f);
    }

};

#endif