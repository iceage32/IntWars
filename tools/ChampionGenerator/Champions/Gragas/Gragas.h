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

        stats->setCurrentHealth(434f);
        stats->setMaxHealth(434f);
        stats->setCurrentMana(221f);
        stats->setMaxMana(221f);
        stats->setBaseAd(55.5f);
        stats->setRange(125f);
        stats->setMovementSpeed(330f);
        stats->setArmor(20f);
        stats->setMagicArmor(30f);
        stats->setHp5(7.25f);
        stats->setMp5(6.45f);
    }

};

#endif