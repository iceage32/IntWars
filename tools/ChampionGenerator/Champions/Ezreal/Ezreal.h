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

        stats->setCurrentHealth(350f);
        stats->setMaxHealth(350f);
        stats->setCurrentMana(235f);
        stats->setMaxMana(235f);
        stats->setBaseAd(47.2f);
        stats->setRange(550f);
        stats->setMovementSpeed(325f);
        stats->setArmor(16f);
        stats->setMagicArmor(30f);
        stats->setHp5(5.5f);
        stats->setMp5(7f);
    }

};

#endif