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

        stats->setCurrentHealth(433f);
        stats->setMaxHealth(433f);
        stats->setCurrentMana(0f);
        stats->setMaxMana(0f);
        stats->setBaseAd(56.23f);
        stats->setRange(125f);
        stats->setMovementSpeed(345f);
        stats->setArmor(21f);
        stats->setMagicArmor(30f);
        stats->setHp5(6.5f);
        stats->setMp5(0f);
    }

};

#endif