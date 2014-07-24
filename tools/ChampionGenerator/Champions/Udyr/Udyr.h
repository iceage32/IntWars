#ifndef _CHAMPION_UDYR_H
#define _CHAMPION_UDYR_H

#include "Champion.h"
#include "TigerStance.h"
#include "TurtleStance.h"
#include "BearStance.h"
#include "PhoenixStance.h"

class Udyr : public Champion {

    public:
    Udyr(Map* map, uint32 id) : Champion("Udyr", map, id) {
        spells.push_back(new TigerStance(this));
        spells.push_back(new TurtleStance(this));
        spells.push_back(new BearStance(this));
        spells.push_back(new PhoenixStance(this));

        stats->setCurrentHealth(427f);
        stats->setMaxHealth(427f);
        stats->setCurrentMana(220f);
        stats->setMaxMana(220f);
        stats->setBaseAd(52.91f);
        stats->setRange(125f);
        stats->setMovementSpeed(345f);
        stats->setArmor(18.75f);
        stats->setMagicArmor(30f);
        stats->setHp5(7.45f);
        stats->setMp5(6.75f);
    }

};

#endif