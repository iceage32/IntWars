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

        stats->setCurrentHealth(468f);
        stats->setMaxHealth(468f);
        stats->setCurrentMana(255f);
        stats->setMaxMana(255f);
        stats->setBaseAd(52f);
        stats->setRange(125f);
        stats->setMovementSpeed(340f);
        stats->setArmor(20.5f);
        stats->setMagicArmor(30f);
        stats->setHp5(7.1f);
        stats->setMp5(4.1f);
    }

};

#endif