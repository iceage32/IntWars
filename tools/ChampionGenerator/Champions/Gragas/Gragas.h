#ifndef _CHAMPION_GRAGAS_H
#define _CHAMPION_GRAGAS_H

#include "Champion.h"
#include "BarrelRoll.h"
#include "DrunkenRage.h"
#include "BodySlam.h"
#include "ExplosiveCask.h"

class Gragas : public Champion {

    public:
    Gragas(Map* map, uint32 id) : Champion("Gragas", map, id) {
        spells.push_back(new BarrelRoll(this));
        spells.push_back(new DrunkenRage(this));
        spells.push_back(new BodySlam(this));
        spells.push_back(new ExplosiveCask(this));

        stats->setCurrentHealth(434.0f);
        stats->setMaxHealth(434.0f);
        stats->setCurrentMana(221.0f);
        stats->setMaxMana(221.0f);
        stats->setBaseAd(55.5f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(330.0f);
        stats->setArmor(20.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.25f);
        stats->setMp5(6.45f);
    }

};

#endif