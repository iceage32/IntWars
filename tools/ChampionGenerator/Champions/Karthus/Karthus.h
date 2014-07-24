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

        stats->setCurrentHealth(390f);
        stats->setMaxHealth(390f);
        stats->setCurrentMana(270f);
        stats->setMaxMana(270f);
        stats->setBaseAd(42.2f);
        stats->setRange(450f);
        stats->setMovementSpeed(335f);
        stats->setArmor(15f);
        stats->setMagicArmor(30f);
        stats->setHp5(5.5f);
        stats->setMp5(6.5f);
    }

};

#endif