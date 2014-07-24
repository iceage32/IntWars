#ifndef _CHAMPION_YASUO_H
#define _CHAMPION_YASUO_H

#include "Champion.h"
#include "SteelTempest.h"
#include "WindWall.h"
#include "SweepingBlade.h"
#include "LastBreath.h"

class Yasuo : public Champion {

    public:
    Yasuo(Map* map, uint32 id) : Champion("Yasuo", map, id) {
        spells.push_back(new SteelTempest(this));
        spells.push_back(new WindWall(this));
        spells.push_back(new SweepingBlade(this));
        spells.push_back(new LastBreath(this));

        stats->setCurrentHealth(430f);
        stats->setMaxHealth(430f);
        stats->setCurrentMana(60f);
        stats->setMaxMana(60f);
        stats->setBaseAd(50f);
        stats->setRange(175f);
        stats->setMovementSpeed(350f);
        stats->setArmor(19f);
        stats->setMagicArmor(30f);
        stats->setHp5(5f);
        stats->setMp5(0f);
    }

};

#endif