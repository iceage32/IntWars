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

        stats->setCurrentHealth(433f);
        stats->setMaxHealth(433f);
        stats->setCurrentMana(230f);
        stats->setMaxMana(230f);
        stats->setBaseAd(52.3f);
        stats->setRange(150f);
        stats->setMovementSpeed(340f);
        stats->setArmor(18f);
        stats->setMagicArmor(30f);
        stats->setHp5(6.95f);
        stats->setMp5(6.9f);
    }

};

#endif