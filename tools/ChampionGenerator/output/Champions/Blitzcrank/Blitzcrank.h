#ifndef _CHAMPION_BLITZCRANK_H
#define _CHAMPION_BLITZCRANK_H

#include "Champion.h"
#include "RocketGrab.h"
#include "Overdrive.h"
#include "PowerFist.h"
#include "StaticField.h"

class Blitzcrank : public Champion {

    public:
    Blitzcrank(Map* map, uint32 id) : Champion("Blitzcrank", map, id) {
        spells.push_back(new RocketGrab(this));
        spells.push_back(new Overdrive(this));
        spells.push_back(new PowerFist(this));
        spells.push_back(new StaticField(this));

        stats->setCurrentHealth(423.0f);
        stats->setMaxHealth(423.0f);
        stats->setCurrentMana(200.0f);
        stats->setMaxMana(200.0f);
        stats->setBaseAd(55.66f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(325.0f);
        stats->setArmor(18.5f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.25f);
        stats->setMp5(6.6f);
    }

};

#endif