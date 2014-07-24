#ifndef _CHAMPION_VIKTOR_H
#define _CHAMPION_VIKTOR_H

#include "Champion.h"
#include "PowerTransfer.h"
#include "GravityField.h"
#include "DeathRay.h"
#include "ChaosStorm.h"

class Viktor : public Champion {

    public:
    Viktor(Map* map, uint32 id) : Champion("Viktor", map, id) {
        spells.push_back(new PowerTransfer(this));
        spells.push_back(new GravityField(this));
        spells.push_back(new DeathRay(this));
        spells.push_back(new ChaosStorm(this));

        stats->setCurrentHealth(385.0f);
        stats->setMaxHealth(385.0f);
        stats->setCurrentMana(240.0f);
        stats->setMaxMana(240.0f);
        stats->setBaseAd(49.0f);
        stats->setRange(525.0f);
        stats->setMovementSpeed(335.0f);
        stats->setArmor(16.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(6.75f);
        stats->setMp5(6.9f);
    }

};

#endif