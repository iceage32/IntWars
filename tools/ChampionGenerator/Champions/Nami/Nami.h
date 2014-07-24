#ifndef _CHAMPION_NAMI_H
#define _CHAMPION_NAMI_H

#include "Champion.h"
#include "AquaPrison.h"
#include "EbbandFlow.h"
#include "TidecallersBlessing.h"
#include "TidalWave.h"

class Nami : public Champion {

    public:
    Nami(Map* map, uint32 id) : Champion("Nami", map, id) {
        spells.push_back(new AquaPrison(this));
        spells.push_back(new EbbandFlow(this));
        spells.push_back(new TidecallersBlessing(this));
        spells.push_back(new TidalWave(this));

        stats->setCurrentHealth(365f);
        stats->setMaxHealth(365f);
        stats->setCurrentMana(305f);
        stats->setMaxMana(305f);
        stats->setBaseAd(48f);
        stats->setRange(550f);
        stats->setMovementSpeed(340f);
        stats->setArmor(13f);
        stats->setMagicArmor(30f);
        stats->setHp5(4.5f);
        stats->setMp5(6.9f);
    }

};

#endif