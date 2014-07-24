#ifndef _CHAMPION_SWAIN_H
#define _CHAMPION_SWAIN_H

#include "Champion.h"
#include "Decrepify.h"
#include "Nevermove.h"
#include "Torment.h"
#include "RavenousFlock.h"

class Swain : public Champion {

    public:
    Swain(Map* map, uint32 id) : Champion("Swain", map, id) {
        spells.push_back(new Decrepify(this));
        spells.push_back(new Nevermove(this));
        spells.push_back(new Torment(this));
        spells.push_back(new RavenousFlock(this));

        stats->setCurrentHealth(385f);
        stats->setMaxHealth(385f);
        stats->setCurrentMana(240f);
        stats->setMaxMana(240f);
        stats->setBaseAd(49f);
        stats->setRange(500f);
        stats->setMovementSpeed(335f);
        stats->setArmor(16f);
        stats->setMagicArmor(30f);
        stats->setHp5(6.75f);
        stats->setMp5(6.8f);
    }

};

#endif