#ifndef _CHAMPION_WUKONG_H
#define _CHAMPION_WUKONG_H

#include "Champion.h"
#include "CrushingBlow.h"
#include "Decoy.h"
#include "NimbusStrike.h"
#include "Cyclone.h"

class Wukong : public Champion {

    public:
    Wukong(Map* map, uint32 id) : Champion("Wukong", map, id) {
        spells.push_back(new CrushingBlow(this));
        spells.push_back(new Decoy(this));
        spells.push_back(new NimbusStrike(this));
        spells.push_back(new Cyclone(this));

        stats->setCurrentHealth(435.0f);
        stats->setMaxHealth(435.0f);
        stats->setCurrentMana(202.0f);
        stats->setMaxMana(202.0f);
        stats->setBaseAd(54.5f);
        stats->setRange(175.0f);
        stats->setMovementSpeed(345.0f);
        stats->setArmor(19.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(5.1f);
        stats->setMp5(6.95f);
    }

};

#endif