#ifndef _CHAMPION_GRAVES_H
#define _CHAMPION_GRAVES_H

#include "Champion.h"
#include "Buckshot.h"
#include "SmokeScreen.h"
#include "Quickdraw.h"
#include "CollateralDamage.h"

class Graves : public Champion {

    public:
    Graves(Map* map, uint32 id) : Champion("Graves", map, id) {
        spells.push_back(new Buckshot(this));
        spells.push_back(new SmokeScreen(this));
        spells.push_back(new Quickdraw(this));
        spells.push_back(new CollateralDamage(this));

        stats->setCurrentHealth(410.0f);
        stats->setMaxHealth(410.0f);
        stats->setCurrentMana(255.0f);
        stats->setMaxMana(255.0f);
        stats->setBaseAd(51.0f);
        stats->setRange(525.0f);
        stats->setMovementSpeed(330.0f);
        stats->setArmor(19.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(5.5f);
        stats->setMp5(6.75f);
    }

};

#endif