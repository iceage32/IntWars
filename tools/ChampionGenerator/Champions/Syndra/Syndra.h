#ifndef _CHAMPION_SYNDRA_H
#define _CHAMPION_SYNDRA_H

#include "Champion.h"
#include "DarkSphere.h"
#include "ForceofWill.h"
#include "ScattertheWeak.h"
#include "UnleashedPower.h"

class Syndra : public Champion {

    public:
    Syndra(Map* map, uint32 id) : Champion("Syndra", map, id) {
        spells.push_back(new DarkSphere(this));
        spells.push_back(new ForceofWill(this));
        spells.push_back(new ScattertheWeak(this));
        spells.push_back(new UnleashedPower(this));

        stats->setCurrentHealth(380f);
        stats->setMaxHealth(380f);
        stats->setCurrentMana(250f);
        stats->setMaxMana(250f);
        stats->setBaseAd(51f);
        stats->setRange(550f);
        stats->setMovementSpeed(330f);
        stats->setArmor(19f);
        stats->setMagicArmor(30f);
        stats->setHp5(5.5f);
        stats->setMp5(6.9f);
    }

};

#endif