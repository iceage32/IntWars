#ifndef _CHAMPION_EZREAL_H
#define _CHAMPION_EZREAL_H

#include "Champion.h"
#include "MysticShot.h"
#include "EssenceFlux.h"
#include "ArcaneShift.h"
#include "TrueshotBarrage.h"

class Ezreal : public Champion {

    public:
    Ezreal(Map* map, uint32 id) : Champion("Ezreal", map, id) {
        spells.push_back(new MysticShot(this));
        spells.push_back(new EssenceFlux(this));
        spells.push_back(new ArcaneShift(this));
        spells.push_back(new TrueshotBarrage(this));

        stats->setCurrentHealth(350.0f);
        stats->setMaxHealth(350.0f);
        stats->setCurrentMana(235.0f);
        stats->setMaxMana(235.0f);
        stats->setBaseAd(47.2f);
        stats->setRange(550.0f);
        stats->setMovementSpeed(325.0f);
        stats->setArmor(16.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(5.5f);
        stats->setMp5(7.0f);
    }

};

#endif