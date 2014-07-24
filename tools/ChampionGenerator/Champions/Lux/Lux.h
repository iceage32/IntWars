#ifndef _CHAMPION_LUX_H
#define _CHAMPION_LUX_H

#include "Champion.h"
#include "LightBinding.h"
#include "PrismaticBarrier.h"
#include "LucentSingularity.h"
#include "FinalSpark.h"

class Lux : public Champion {

    public:
    Lux(Map* map, uint32 id) : Champion("Lux", map, id) {
        spells.push_back(new LightBinding(this));
        spells.push_back(new PrismaticBarrier(this));
        spells.push_back(new LucentSingularity(this));
        spells.push_back(new FinalSpark(this));

        stats->setCurrentHealth(345f);
        stats->setMaxHealth(345f);
        stats->setCurrentMana(250f);
        stats->setMaxMana(250f);
        stats->setBaseAd(50f);
        stats->setRange(550f);
        stats->setMovementSpeed(330f);
        stats->setArmor(12f);
        stats->setMagicArmor(30f);
        stats->setHp5(4.5f);
        stats->setMp5(6f);
    }

};

#endif