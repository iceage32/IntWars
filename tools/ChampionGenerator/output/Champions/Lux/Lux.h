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

        stats->setCurrentHealth(345.0f);
        stats->setMaxHealth(345.0f);
        stats->setCurrentMana(250.0f);
        stats->setMaxMana(250.0f);
        stats->setBaseAd(50.0f);
        stats->setRange(550.0f);
        stats->setMovementSpeed(330.0f);
        stats->setArmor(12.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(4.5f);
        stats->setMp5(6.0f);
    }

};

#endif