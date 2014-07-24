#ifndef _CHAMPION_PANTHEON_H
#define _CHAMPION_PANTHEON_H

#include "Champion.h"
#include "SpearShot.h"
#include "AegisofZeonia.h"
#include "HeartseekerStrike.h"
#include "GrandSkyfall.h"

class Pantheon : public Champion {

    public:
    Pantheon(Map* map, uint32 id) : Champion("Pantheon", map, id) {
        spells.push_back(new SpearShot(this));
        spells.push_back(new AegisofZeonia(this));
        spells.push_back(new HeartseekerStrike(this));
        spells.push_back(new GrandSkyfall(this));

        stats->setCurrentHealth(433f);
        stats->setMaxHealth(433f);
        stats->setCurrentMana(210f);
        stats->setMaxMana(210f);
        stats->setBaseAd(50.7f);
        stats->setRange(150f);
        stats->setMovementSpeed(355f);
        stats->setArmor(21.1f);
        stats->setMagicArmor(30f);
        stats->setHp5(6.75f);
        stats->setMp5(6.6f);
    }

};

#endif