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

        stats->setCurrentHealth(380.0f);
        stats->setMaxHealth(380.0f);
        stats->setCurrentMana(250.0f);
        stats->setMaxMana(250.0f);
        stats->setBaseAd(52.0f);
        stats->setRange(550.0f);
        stats->setMovementSpeed(340.0f);
        stats->setArmor(16.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(4.5f);
        stats->setMp5(7.0f);
    }

};

#endif