#ifndef _CHAMPION_DRMUNDO_H
#define _CHAMPION_DRMUNDO_H

#include "Champion.h"
#include "InfectedCleaver.h"
#include "BurningAgony.h"
#include "Masochism.h"
#include "Sadism.h"

class DrMundo : public Champion {

    public:
    DrMundo(Map* map, uint32 id) : Champion("DrMundo", map, id) {
        spells.push_back(new InfectedCleaver(this));
        spells.push_back(new BurningAgony(this));
        spells.push_back(new Masochism(this));
        spells.push_back(new Sadism(this));

        stats->setCurrentHealth(433.0f);
        stats->setMaxHealth(433.0f);
        stats->setCurrentMana(0.0f);
        stats->setMaxMana(0.0f);
        stats->setBaseAd(56.23f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(345.0f);
        stats->setArmor(21.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(6.5f);
        stats->setMp5(0.0f);
    }

};

#endif