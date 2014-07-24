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

        stats->setCurrentHealth(380f);
        stats->setMaxHealth(380f);
        stats->setCurrentMana(250f);
        stats->setMaxMana(250f);
        stats->setBaseAd(50f);
        stats->setRange(550f);
        stats->setMovementSpeed(330f);
        stats->setArmor(15f);
        stats->setMagicArmor(30f);
        stats->setHp5(5.5f);
        stats->setMp5(7f);
    }

};

#endif