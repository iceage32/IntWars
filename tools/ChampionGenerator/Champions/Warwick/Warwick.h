#ifndef _CHAMPION_WARWICK_H
#define _CHAMPION_WARWICK_H

#include "Champion.h"
#include "HungeringStrike.h"
#include "HuntersCall.h"
#include "BloodScent.h"
#include "InfiniteDuress.h"

class Warwick : public Champion {

    public:
    Warwick(Map* map, uint32 id) : Champion("Warwick", map, id) {
        spells.push_back(new HungeringStrike(this));
        spells.push_back(new HuntersCall(this));
        spells.push_back(new BloodScent(this));
        spells.push_back(new InfiniteDuress(this));

        stats->setCurrentHealth(428f);
        stats->setMaxHealth(428f);
        stats->setCurrentMana(190f);
        stats->setMaxMana(190f);
        stats->setBaseAd(56.76f);
        stats->setRange(125f);
        stats->setMovementSpeed(345f);
        stats->setArmor(20f);
        stats->setMagicArmor(30f);
        stats->setHp5(7.05f);
        stats->setMp5(7.1f);
    }

};

#endif