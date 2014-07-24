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

        stats->setCurrentHealth(426.0f);
        stats->setMaxHealth(426.0f);
        stats->setCurrentMana(200.0f);
        stats->setMaxMana(200.0f);
        stats->setBaseAd(50.0f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(340.0f);
        stats->setArmor(24.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(8.25f);
        stats->setMp5(6.0f);
    }

};

#endif