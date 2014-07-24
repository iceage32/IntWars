#ifndef _CHAMPION_VLADIMIR_H
#define _CHAMPION_VLADIMIR_H

#include "Champion.h"
#include "Transfusion.h"
#include "SanguinePool.h"
#include "TidesofBlood.h"
#include "Hemoplague.h"

class Vladimir : public Champion {

    public:
    Vladimir(Map* map, uint32 id) : Champion("Vladimir", map, id) {
        spells.push_back(new Transfusion(this));
        spells.push_back(new SanguinePool(this));
        spells.push_back(new TidesofBlood(this));
        spells.push_back(new Hemoplague(this));

        stats->setCurrentHealth(400.0f);
        stats->setMaxHealth(400.0f);
        stats->setCurrentMana(0.0f);
        stats->setMaxMana(0.0f);
        stats->setBaseAd(45.0f);
        stats->setRange(450.0f);
        stats->setMovementSpeed(335.0f);
        stats->setArmor(16.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(6.0f);
        stats->setMp5(0.0f);
    }

};

#endif