#ifndef _CHAMPION_NAUTILUS_H
#define _CHAMPION_NAUTILUS_H

#include "Champion.h"
#include "DredgeLine.h"
#include "TitansWrath.h"
#include "Riptide.h"
#include "DepthCharge.h"

class Nautilus : public Champion {

    public:
    Nautilus(Map* map, uint32 id) : Champion("Nautilus", map, id) {
        spells.push_back(new DredgeLine(this));
        spells.push_back(new TitansWrath(this));
        spells.push_back(new Riptide(this));
        spells.push_back(new DepthCharge(this));

        stats->setCurrentHealth(432f);
        stats->setMaxHealth(432f);
        stats->setCurrentMana(200f);
        stats->setMaxMana(200f);
        stats->setBaseAd(52f);
        stats->setRange(175f);
        stats->setMovementSpeed(325f);
        stats->setArmor(21f);
        stats->setMagicArmor(30f);
        stats->setHp5(7.45f);
        stats->setMp5(7.45f);
    }

};

#endif