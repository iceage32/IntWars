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

        stats->setCurrentHealth(428.0f);
        stats->setMaxHealth(428.0f);
        stats->setCurrentMana(200.0f);
        stats->setMaxMana(200.0f);
        stats->setBaseAd(54.5f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(335.0f);
        stats->setArmor(19.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.45f);
        stats->setMp5(50.0f);
    }

};

#endif