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

        stats->setCurrentHealth(410f);
        stats->setMaxHealth(410f);
        stats->setCurrentMana(255f);
        stats->setMaxMana(255f);
        stats->setBaseAd(51f);
        stats->setRange(525f);
        stats->setMovementSpeed(330f);
        stats->setArmor(19f);
        stats->setMagicArmor(30f);
        stats->setHp5(5.5f);
        stats->setMp5(6.75f);
    }

};

#endif