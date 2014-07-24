#ifndef _CHAMPION_AHRI_H
#define _CHAMPION_AHRI_H

#include "Champion.h"
#include "OrbofDeception.h"
#include "FoxFire.h"
#include "Charm.h"
#include "SpiritRush.h"

class Ahri : public Champion {

    public:
    Ahri(Map* map, uint32 id) : Champion("Ahri", map, id) {
        spells.push_back(new OrbofDeception(this));
        spells.push_back(new FoxFire(this));
        spells.push_back(new Charm(this));
        spells.push_back(new SpiritRush(this));

        stats->setCurrentHealth(380.0f);
        stats->setMaxHealth(380.0f);
        stats->setCurrentMana(250.0f);
        stats->setMaxMana(250.0f);
        stats->setBaseAd(50.0f);
        stats->setRange(550.0f);
        stats->setMovementSpeed(330.0f);
        stats->setArmor(15.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(5.5f);
        stats->setMp5(7.0f);
    }

};

#endif