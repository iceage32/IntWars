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

        stats->setCurrentHealth(380.0f);
        stats->setMaxHealth(380.0f);
        stats->setCurrentMana(250.0f);
        stats->setMaxMana(250.0f);
        stats->setBaseAd(51.0f);
        stats->setRange(550.0f);
        stats->setMovementSpeed(330.0f);
        stats->setArmor(19.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(5.5f);
        stats->setMp5(6.9f);
    }

};

#endif