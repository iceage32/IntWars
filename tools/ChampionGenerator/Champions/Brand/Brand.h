#ifndef _CHAMPION_BRAND_H
#define _CHAMPION_BRAND_H

#include "Champion.h"
#include "Sear.h"
#include "PillarofFlame.h"
#include "Conflagration.h"
#include "Pyroclasm.h"

class Brand : public Champion {

    public:
    Brand(Map* map, uint32 id) : Champion("Brand", map, id) {
        spells.push_back(new Sear(this));
        spells.push_back(new PillarofFlame(this));
        spells.push_back(new Conflagration(this));
        spells.push_back(new Pyroclasm(this));

        stats->setCurrentHealth(380f);
        stats->setMaxHealth(380f);
        stats->setCurrentMana(250f);
        stats->setMaxMana(250f);
        stats->setBaseAd(52f);
        stats->setRange(550f);
        stats->setMovementSpeed(340f);
        stats->setArmor(16f);
        stats->setMagicArmor(30f);
        stats->setHp5(4.5f);
        stats->setMp5(7f);
    }

};

#endif