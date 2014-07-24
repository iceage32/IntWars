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

        stats->setCurrentHealth(495f);
        stats->setMaxHealth(495f);
        stats->setCurrentMana(215f);
        stats->setMaxMana(215f);
        stats->setBaseAd(54f);
        stats->setRange(125f);
        stats->setMovementSpeed(345f);
        stats->setArmor(20.5f);
        stats->setMagicArmor(30f);
        stats->setHp5(4.25f);
        stats->setMp5(6.5f);
    }

};

#endif