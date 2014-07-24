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

        stats->setCurrentHealth(430.0f);
        stats->setMaxHealth(430.0f);
        stats->setCurrentMana(60.0f);
        stats->setMaxMana(60.0f);
        stats->setBaseAd(50.0f);
        stats->setRange(175.0f);
        stats->setMovementSpeed(350.0f);
        stats->setArmor(19.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(5.0f);
        stats->setMp5(0.0f);
    }

};

#endif