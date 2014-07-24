#ifndef _CHAMPION_TARIC_H
#define _CHAMPION_TARIC_H

#include "Champion.h"
#include "Imbue.h"
#include "Shatter.h"
#include "Dazzle.h"
#include "Radiance.h"

class Taric : public Champion {

    public:
    Taric(Map* map, uint32 id) : Champion("Taric", map, id) {
        spells.push_back(new Imbue(this));
        spells.push_back(new Shatter(this));
        spells.push_back(new Dazzle(this));
        spells.push_back(new Radiance(this));

        stats->setCurrentHealth(468.0f);
        stats->setMaxHealth(468.0f);
        stats->setCurrentMana(255.0f);
        stats->setMaxMana(255.0f);
        stats->setBaseAd(52.0f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(340.0f);
        stats->setArmor(20.5f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.1f);
        stats->setMp5(4.1f);
    }

};

#endif