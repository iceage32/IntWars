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

        stats->setCurrentHealth(432.0f);
        stats->setMaxHealth(432.0f);
        stats->setCurrentMana(200.0f);
        stats->setMaxMana(200.0f);
        stats->setBaseAd(52.0f);
        stats->setRange(175.0f);
        stats->setMovementSpeed(325.0f);
        stats->setArmor(21.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.45f);
        stats->setMp5(7.45f);
    }

};

#endif