#ifndef _CHAMPION_NASUS_H
#define _CHAMPION_NASUS_H

#include "Champion.h"
#include "SiphoningStrike.h"
#include "Wither.h"
#include "SpiritFire.h"
#include "FuryoftheSands.h"

class Nasus : public Champion {

    public:
    Nasus(Map* map, uint32 id) : Champion("Nasus", map, id) {
        spells.push_back(new SiphoningStrike(this));
        spells.push_back(new Wither(this));
        spells.push_back(new SpiritFire(this));
        spells.push_back(new FuryoftheSands(this));

        stats->setCurrentHealth(410f);
        stats->setMaxHealth(410f);
        stats->setCurrentMana(200f);
        stats->setMaxMana(200f);
        stats->setBaseAd(53.3f);
        stats->setRange(125f);
        stats->setMovementSpeed(350f);
        stats->setArmor(19f);
        stats->setMagicArmor(30f);
        stats->setHp5(7.5f);
        stats->setMp5(6.6f);
    }

};

#endif