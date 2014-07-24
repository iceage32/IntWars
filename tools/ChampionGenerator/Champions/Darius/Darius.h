#ifndef _CHAMPION_DARIUS_H
#define _CHAMPION_DARIUS_H

#include "Champion.h"
#include "Decimate.h"
#include "CripplingStrike.h"
#include "Apprehend.h"
#include "NoxianGuillotine.h"

class Darius : public Champion {

    public:
    Darius(Map* map, uint32 id) : Champion("Darius", map, id) {
        spells.push_back(new Decimate(this));
        spells.push_back(new CripplingStrike(this));
        spells.push_back(new Apprehend(this));
        spells.push_back(new NoxianGuillotine(this));

        stats->setCurrentHealth(426f);
        stats->setMaxHealth(426f);
        stats->setCurrentMana(200f);
        stats->setMaxMana(200f);
        stats->setBaseAd(50f);
        stats->setRange(125f);
        stats->setMovementSpeed(340f);
        stats->setArmor(24f);
        stats->setMagicArmor(30f);
        stats->setHp5(8.25f);
        stats->setMp5(6f);
    }

};

#endif