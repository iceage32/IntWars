#ifndef _CHAMPION_JAYCE_H
#define _CHAMPION_JAYCE_H

#include "Champion.h"
#include "TotheSkiesShockBlast.h"
#include "LightningFieldHyperCharge.h"
#include "ThunderingBlowAccelerationGate.h"
#include "MercuryCannonMercuryHammer.h"

class Jayce : public Champion {

    public:
    Jayce(Map* map, uint32 id) : Champion("Jayce", map, id) {
        spells.push_back(new TotheSkiesShockBlast(this));
        spells.push_back(new LightningFieldHyperCharge(this));
        spells.push_back(new ThunderingBlowAccelerationGate(this));
        spells.push_back(new MercuryCannonMercuryHammer(this));

        stats->setCurrentHealth(420.0f);
        stats->setMaxHealth(420.0f);
        stats->setCurrentMana(240.0f);
        stats->setMaxMana(240.0f);
        stats->setBaseAd(46.5f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(335.0f);
        stats->setArmor(16.5f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(6.0f);
        stats->setMp5(7.0f);
    }

};

#endif