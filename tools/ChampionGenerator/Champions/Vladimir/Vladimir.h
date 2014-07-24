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

        stats->setCurrentHealth(400f);
        stats->setMaxHealth(400f);
        stats->setCurrentMana(0f);
        stats->setMaxMana(0f);
        stats->setBaseAd(45f);
        stats->setRange(450f);
        stats->setMovementSpeed(335f);
        stats->setArmor(16f);
        stats->setMagicArmor(30f);
        stats->setHp5(6f);
        stats->setMp5(0f);
    }

};

#endif