#ifndef _CHAMPION_VARUS_H
#define _CHAMPION_VARUS_H

#include "Champion.h"
#include "PiercingArrow.h"
#include "BlightedQuiver.h"
#include "HailofArrows.h"
#include "ChainofCorruption.h"

class Varus : public Champion {

    public:
    Varus(Map* map, uint32 id) : Champion("Varus", map, id) {
        spells.push_back(new PiercingArrow(this));
        spells.push_back(new BlightedQuiver(this));
        spells.push_back(new HailofArrows(this));
        spells.push_back(new ChainofCorruption(this));

        stats->setCurrentHealth(400.0f);
        stats->setMaxHealth(400.0f);
        stats->setCurrentMana(250.0f);
        stats->setMaxMana(250.0f);
        stats->setBaseAd(46.0f);
        stats->setRange(575.0f);
        stats->setMovementSpeed(330.0f);
        stats->setArmor(17.5f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(4.5f);
        stats->setMp5(6.5f);
    }

};

#endif