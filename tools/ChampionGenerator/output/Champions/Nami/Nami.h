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

        stats->setCurrentHealth(365.0f);
        stats->setMaxHealth(365.0f);
        stats->setCurrentMana(305.0f);
        stats->setMaxMana(305.0f);
        stats->setBaseAd(48.0f);
        stats->setRange(550.0f);
        stats->setMovementSpeed(340.0f);
        stats->setArmor(13.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(4.5f);
        stats->setMp5(6.9f);
    }

};

#endif