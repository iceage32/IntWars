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

        stats->setCurrentHealth(385f);
        stats->setMaxHealth(385f);
        stats->setCurrentMana(240f);
        stats->setMaxMana(240f);
        stats->setBaseAd(49f);
        stats->setRange(525f);
        stats->setMovementSpeed(335f);
        stats->setArmor(16f);
        stats->setMagicArmor(30f);
        stats->setHp5(6.75f);
        stats->setMp5(6.9f);
    }

};

#endif