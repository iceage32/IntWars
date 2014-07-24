#ifndef _CHAMPION_YORICK_H
#define _CHAMPION_YORICK_H

#include "Champion.h"
#include "OmenofWar.h"
#include "OmenofPestilence.h"
#include "OmenofFamine.h"
#include "OmenofDeath.h"

class Yorick : public Champion {

    public:
    Yorick(Map* map, uint32 id) : Champion("Yorick", map, id) {
        spells.push_back(new OmenofWar(this));
        spells.push_back(new OmenofPestilence(this));
        spells.push_back(new OmenofFamine(this));
        spells.push_back(new OmenofDeath(this));

        stats->setCurrentHealth(421.0f);
        stats->setMaxHealth(421.0f);
        stats->setCurrentMana(235.0f);
        stats->setMaxMana(235.0f);
        stats->setBaseAd(51.7f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(345.0f);
        stats->setArmor(19.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.0f);
        stats->setMp5(6.0f);
    }

};

#endif