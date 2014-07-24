#ifndef _CHAMPION_LEESIN_H
#define _CHAMPION_LEESIN_H

#include "Champion.h"
#include "SonicWaveResonatingStrike.h"
#include "SafeguardIronWill.h"
#include "TempestCripple.h"
#include "DragonsRage.h"

class LeeSin : public Champion {

    public:
    LeeSin(Map* map, uint32 id) : Champion("LeeSin", map, id) {
        spells.push_back(new SonicWaveResonatingStrike(this));
        spells.push_back(new SafeguardIronWill(this));
        spells.push_back(new TempestCripple(this));
        spells.push_back(new DragonsRage(this));

        stats->setCurrentHealth(428f);
        stats->setMaxHealth(428f);
        stats->setCurrentMana(200f);
        stats->setMaxMana(200f);
        stats->setBaseAd(55.8f);
        stats->setRange(125f);
        stats->setMovementSpeed(350f);
        stats->setArmor(20f);
        stats->setMagicArmor(30f);
        stats->setHp5(6.25f);
        stats->setMp5(50f);
    }

};

#endif