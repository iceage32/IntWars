#ifndef _CHAMPION_KARTHUS_H
#define _CHAMPION_KARTHUS_H

#include "Champion.h"
#include "LayWaste.h"
#include "WallofPain.h"
#include "Defile.h"
#include "Requiem.h"

class Karthus : public Champion {

    public:
    Karthus(Map* map, uint32 id) : Champion("Karthus", map, id) {
        spells.push_back(new LayWaste(this));
        spells.push_back(new WallofPain(this));
        spells.push_back(new Defile(this));
        spells.push_back(new Requiem(this));

        stats->setCurrentHealth(390.0f);
        stats->setMaxHealth(390.0f);
        stats->setCurrentMana(270.0f);
        stats->setMaxMana(270.0f);
        stats->setBaseAd(42.2f);
        stats->setRange(450.0f);
        stats->setMovementSpeed(335.0f);
        stats->setArmor(15.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(5.5f);
        stats->setMp5(6.5f);
    }

};

#endif