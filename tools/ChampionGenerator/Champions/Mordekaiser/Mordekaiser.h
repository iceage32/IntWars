#ifndef _CHAMPION_MORDEKAISER_H
#define _CHAMPION_MORDEKAISER_H

#include "Champion.h"
#include "MaceofSpades.h"
#include "CreepingDeath.h"
#include "SiphonofDestruction.h"
#include "ChildrenoftheGrave.h"

class Mordekaiser : public Champion {

    public:
    Mordekaiser(Map* map, uint32 id) : Champion("Mordekaiser", map, id) {
        spells.push_back(new MaceofSpades(this));
        spells.push_back(new CreepingDeath(this));
        spells.push_back(new SiphonofDestruction(this));
        spells.push_back(new ChildrenoftheGrave(this));

        stats->setCurrentHealth(421f);
        stats->setMaxHealth(421f);
        stats->setCurrentMana(120f);
        stats->setMaxMana(120f);
        stats->setBaseAd(51.7f);
        stats->setRange(125f);
        stats->setMovementSpeed(340f);
        stats->setArmor(19f);
        stats->setMagicArmor(30f);
        stats->setHp5(7.45f);
        stats->setMp5(0f);
    }

};

#endif