#ifndef _CHAMPION_KASSADIN_H
#define _CHAMPION_KASSADIN_H

#include "Champion.h"
#include "NullSphere.h"
#include "NetherBlade.h"
#include "ForcePulse.h"
#include "Riftwalk.h"

class Kassadin : public Champion {

    public:
    Kassadin(Map* map, uint32 id) : Champion("Kassadin", map, id) {
        spells.push_back(new NullSphere(this));
        spells.push_back(new NetherBlade(this));
        spells.push_back(new ForcePulse(this));
        spells.push_back(new Riftwalk(this));

        stats->setCurrentHealth(433.0f);
        stats->setMaxHealth(433.0f);
        stats->setCurrentMana(230.0f);
        stats->setMaxMana(230.0f);
        stats->setBaseAd(52.3f);
        stats->setRange(150.0f);
        stats->setMovementSpeed(340.0f);
        stats->setArmor(18.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(6.95f);
        stats->setMp5(6.9f);
    }

};

#endif