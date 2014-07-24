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

        stats->setCurrentHealth(437.0f);
        stats->setMaxHealth(437.0f);
        stats->setCurrentMana(220.0f);
        stats->setMaxMana(220.0f);
        stats->setBaseAd(48.0f);
        stats->setRange(425.0f);
        stats->setMovementSpeed(335.0f);
        stats->setArmor(19.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(5.5f);
        stats->setMp5(7.5f);
    }

};

#endif