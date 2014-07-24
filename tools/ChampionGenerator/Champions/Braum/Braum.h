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

        stats->setCurrentHealth(430f);
        stats->setMaxHealth(430f);
        stats->setCurrentMana(235f);
        stats->setMaxMana(235f);
        stats->setBaseAd(50f);
        stats->setRange(125f);
        stats->setMovementSpeed(335f);
        stats->setArmor(20f);
        stats->setMagicArmor(30f);
        stats->setHp5(6.5f);
        stats->setMp5(5.5f);
    }

};

#endif