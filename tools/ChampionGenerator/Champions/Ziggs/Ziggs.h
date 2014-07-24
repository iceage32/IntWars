#ifndef _CHAMPION_ZIGGS_H
#define _CHAMPION_ZIGGS_H

#include "Champion.h"
#include "BouncingBomb.h"
#include "SatchelCharge.h"
#include "HexplosiveMinefield.h"
#include "MegaInfernoBomb.h"

class Ziggs : public Champion {

    public:
    Ziggs(Map* map, uint32 id) : Champion("Ziggs", map, id) {
        spells.push_back(new BouncingBomb(this));
        spells.push_back(new SatchelCharge(this));
        spells.push_back(new HexplosiveMinefield(this));
        spells.push_back(new MegaInfernoBomb(this));

        stats->setCurrentHealth(390.0f);
        stats->setMaxHealth(390.0f);
        stats->setCurrentMana(250.0f);
        stats->setMaxMana(250.0f);
        stats->setBaseAd(51.0f);
        stats->setRange(550.0f);
        stats->setMovementSpeed(325.0f);
        stats->setArmor(16.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(5.25f);
        stats->setMp5(6.75f);
    }

};

#endif