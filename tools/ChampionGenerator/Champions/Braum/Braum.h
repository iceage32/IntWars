#ifndef _CHAMPION_BRAUM_H
#define _CHAMPION_BRAUM_H

#include "Champion.h"
#include "WintersBite.h"
#include "StandBehindMe.h"
#include "Unbreakable.h"
#include "GlacialFissure.h"

class Braum : public Champion {

    public:
    Braum(Map* map, uint32 id) : Champion("Braum", map, id) {
        spells.push_back(new WintersBite(this));
        spells.push_back(new StandBehindMe(this));
        spells.push_back(new Unbreakable(this));
        spells.push_back(new GlacialFissure(this));

        stats->setCurrentHealth(430.0f);
        stats->setMaxHealth(430.0f);
        stats->setCurrentMana(235.0f);
        stats->setMaxMana(235.0f);
        stats->setBaseAd(50.0f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(335.0f);
        stats->setArmor(20.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(6.5f);
        stats->setMp5(5.5f);
    }

};

#endif