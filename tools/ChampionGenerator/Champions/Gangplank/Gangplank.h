#ifndef _CHAMPION_GANGPLANK_H
#define _CHAMPION_GANGPLANK_H

#include "Champion.h"
#include "Parrrley.h"
#include "RemoveScurvy.h"
#include "RaiseMorale.h"
#include "CannonBarrage.h"

class Gangplank : public Champion {

    public:
    Gangplank(Map* map, uint32 id) : Champion("Gangplank", map, id) {
        spells.push_back(new Parrrley(this));
        spells.push_back(new RemoveScurvy(this));
        spells.push_back(new RaiseMorale(this));
        spells.push_back(new CannonBarrage(this));

        stats->setCurrentHealth(495.0f);
        stats->setMaxHealth(495.0f);
        stats->setCurrentMana(215.0f);
        stats->setMaxMana(215.0f);
        stats->setBaseAd(54.0f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(345.0f);
        stats->setArmor(20.5f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(4.25f);
        stats->setMp5(6.5f);
    }

};

#endif