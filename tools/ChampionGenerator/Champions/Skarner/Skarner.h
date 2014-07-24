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

        stats->setCurrentHealth(440f);
        stats->setMaxHealth(440f);
        stats->setCurrentMana(205f);
        stats->setMaxMana(205f);
        stats->setBaseAd(54.1f);
        stats->setRange(125f);
        stats->setMovementSpeed(345f);
        stats->setArmor(23f);
        stats->setMagicArmor(30f);
        stats->setHp5(7.5f);
        stats->setMp5(6.45f);
    }

};

#endif