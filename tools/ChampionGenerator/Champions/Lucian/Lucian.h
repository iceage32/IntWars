#ifndef _CHAMPION_LUCIAN_H
#define _CHAMPION_LUCIAN_H

#include "Champion.h"
#include "PiercingLight.h"
#include "ArdentBlaze.h"
#include "RelentlessPursuit.h"
#include "TheCulling.h"

class Lucian : public Champion {

    public:
    Lucian(Map* map, uint32 id) : Champion("Lucian", map, id) {
        spells.push_back(new PiercingLight(this));
        spells.push_back(new ArdentBlaze(this));
        spells.push_back(new RelentlessPursuit(this));
        spells.push_back(new TheCulling(this));

        stats->setCurrentHealth(420f);
        stats->setMaxHealth(420f);
        stats->setCurrentMana(230f);
        stats->setMaxMana(230f);
        stats->setBaseAd(49f);
        stats->setRange(500f);
        stats->setMovementSpeed(335f);
        stats->setArmor(19f);
        stats->setMagicArmor(30f);
        stats->setHp5(5.1f);
        stats->setMp5(7f);
    }

};

#endif