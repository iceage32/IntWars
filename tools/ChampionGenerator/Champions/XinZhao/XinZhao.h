#ifndef _CHAMPION_XINZHAO_H
#define _CHAMPION_XINZHAO_H

#include "Champion.h"
#include "ThreeTalonStrike.h"
#include "BattleCry.h"
#include "AudaciousCharge.h"
#include "CrescentSweep.h"

class XinZhao : public Champion {

    public:
    XinZhao(Map* map, uint32 id) : Champion("XinZhao", map, id) {
        spells.push_back(new ThreeTalonStrike(this));
        spells.push_back(new BattleCry(this));
        spells.push_back(new AudaciousCharge(this));
        spells.push_back(new CrescentSweep(this));

        stats->setCurrentHealth(445.0f);
        stats->setMaxHealth(445.0f);
        stats->setCurrentMana(215.0f);
        stats->setMaxMana(215.0f);
        stats->setBaseAd(52.0f);
        stats->setRange(175.0f);
        stats->setMovementSpeed(345.0f);
        stats->setArmor(20.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.0f);
        stats->setMp5(6.5f);
    }

};

#endif