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

        stats->setCurrentHealth(420f);
        stats->setMaxHealth(420f);
        stats->setCurrentMana(240f);
        stats->setMaxMana(240f);
        stats->setBaseAd(46.5f);
        stats->setRange(125f);
        stats->setMovementSpeed(335f);
        stats->setArmor(16.5f);
        stats->setMagicArmor(30f);
        stats->setHp5(6f);
        stats->setMp5(7f);
    }

};

#endif