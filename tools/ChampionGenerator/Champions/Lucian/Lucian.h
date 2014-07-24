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

        stats->setCurrentHealth(420.0f);
        stats->setMaxHealth(420.0f);
        stats->setCurrentMana(230.0f);
        stats->setMaxMana(230.0f);
        stats->setBaseAd(49.0f);
        stats->setRange(500.0f);
        stats->setMovementSpeed(335.0f);
        stats->setArmor(19.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(5.1f);
        stats->setMp5(7.0f);
    }

};

#endif