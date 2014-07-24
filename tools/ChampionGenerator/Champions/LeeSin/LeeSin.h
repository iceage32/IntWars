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

        stats->setCurrentHealth(428.0f);
        stats->setMaxHealth(428.0f);
        stats->setCurrentMana(200.0f);
        stats->setMaxMana(200.0f);
        stats->setBaseAd(55.8f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(350.0f);
        stats->setArmor(20.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(6.25f);
        stats->setMp5(50.0f);
    }

};

#endif