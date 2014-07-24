#ifndef _CHAMPION_URGOT_H
#define _CHAMPION_URGOT_H

#include "Champion.h"
#include "AcidHunter.h"
#include "TerrorCapacitor.h"
#include "NoxianCorrosiveCharge.h"
#include "HyperKineticPositionReverser.h"

class Urgot : public Champion {

    public:
    Urgot(Map* map, uint32 id) : Champion("Urgot", map, id) {
        spells.push_back(new AcidHunter(this));
        spells.push_back(new TerrorCapacitor(this));
        spells.push_back(new NoxianCorrosiveCharge(this));
        spells.push_back(new HyperKineticPositionReverser(this));

        stats->setCurrentHealth(437f);
        stats->setMaxHealth(437f);
        stats->setCurrentMana(220f);
        stats->setMaxMana(220f);
        stats->setBaseAd(48f);
        stats->setRange(425f);
        stats->setMovementSpeed(335f);
        stats->setArmor(19f);
        stats->setMagicArmor(30f);
        stats->setHp5(5.5f);
        stats->setMp5(7.5f);
    }

};

#endif