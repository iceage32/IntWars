#ifndef _CHAMPION_TRISTANA_H
#define _CHAMPION_TRISTANA_H

#include "Champion.h"
#include "RapidFire.h"
#include "RocketJump.h"
#include "ExplosiveShot.h"
#include "BusterShot.h"

class Tristana : public Champion {

    public:
    Tristana(Map* map, uint32 id) : Champion("Tristana", map, id) {
        spells.push_back(new RapidFire(this));
        spells.push_back(new RocketJump(this));
        spells.push_back(new ExplosiveShot(this));
        spells.push_back(new BusterShot(this));

        stats->setCurrentHealth(415f);
        stats->setMaxHealth(415f);
        stats->setCurrentMana(193f);
        stats->setMaxMana(193f);
        stats->setBaseAd(46.5f);
        stats->setRange(550f);
        stats->setMovementSpeed(325f);
        stats->setArmor(19f);
        stats->setMagicArmor(30f);
        stats->setHp5(5.1f);
        stats->setMp5(6.45f);
    }

};

#endif