#ifndef _CHAMPION_SKARNER_H
#define _CHAMPION_SKARNER_H

#include "Champion.h"
#include "CrystalSlash.h"
#include "CrystallineExoskeleton.h"
#include "Fracture.h"
#include "Impale.h"

class Skarner : public Champion {

    public:
    Skarner(Map* map, uint32 id) : Champion("Skarner", map, id) {
        spells.push_back(new CrystalSlash(this));
        spells.push_back(new CrystallineExoskeleton(this));
        spells.push_back(new Fracture(this));
        spells.push_back(new Impale(this));

        stats->setCurrentHealth(440.0f);
        stats->setMaxHealth(440.0f);
        stats->setCurrentMana(205.0f);
        stats->setMaxMana(205.0f);
        stats->setBaseAd(54.1f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(345.0f);
        stats->setArmor(23.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.5f);
        stats->setMp5(6.45f);
    }

};

#endif