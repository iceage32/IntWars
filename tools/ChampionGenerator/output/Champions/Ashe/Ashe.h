#ifndef _CHAMPION_ASHE_H
#define _CHAMPION_ASHE_H

#include "Champion.h"
#include "FrostShot.h"
#include "Volley.h"
#include "Hawkshot.h"
#include "EnchantedCrystalArrow.h"

class Ashe : public Champion {

    public:
    Ashe(Map* map, uint32 id) : Champion("Ashe", map, id) {
        spells.push_back(new FrostShot(this));
        spells.push_back(new Volley(this));
        spells.push_back(new Hawkshot(this));
        spells.push_back(new EnchantedCrystalArrow(this));

        stats->setCurrentHealth(395.0f);
        stats->setMaxHealth(395.0f);
        stats->setCurrentMana(173.0f);
        stats->setMaxMana(173.0f);
        stats->setBaseAd(46.3f);
        stats->setRange(600.0f);
        stats->setMovementSpeed(325.0f);
        stats->setArmor(15.5f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(4.5f);
        stats->setMp5(6.3f);
    }

};

#endif