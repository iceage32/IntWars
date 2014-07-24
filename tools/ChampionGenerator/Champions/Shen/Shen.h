#ifndef _CHAMPION_SHEN_H
#define _CHAMPION_SHEN_H

#include "Champion.h"
#include "VorpalBlade.h"
#include "Feint.h"
#include "ShadowDash.h"
#include "StandUnited.h"

class Shen : public Champion {

    public:
    Shen(Map* map, uint32 id) : Champion("Shen", map, id) {
        spells.push_back(new VorpalBlade(this));
        spells.push_back(new Feint(this));
        spells.push_back(new ShadowDash(this));
        spells.push_back(new StandUnited(this));

        stats->setCurrentHealth(428f);
        stats->setMaxHealth(428f);
        stats->setCurrentMana(200f);
        stats->setMaxMana(200f);
        stats->setBaseAd(54.5f);
        stats->setRange(125f);
        stats->setMovementSpeed(335f);
        stats->setArmor(19f);
        stats->setMagicArmor(30f);
        stats->setHp5(7.45f);
        stats->setMp5(50f);
    }

};

#endif