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

        stats->setCurrentHealth(421f);
        stats->setMaxHealth(421f);
        stats->setCurrentMana(235f);
        stats->setMaxMana(235f);
        stats->setBaseAd(51.7f);
        stats->setRange(125f);
        stats->setMovementSpeed(345f);
        stats->setArmor(19f);
        stats->setMagicArmor(30f);
        stats->setHp5(7f);
        stats->setMp5(6f);
    }

};

#endif