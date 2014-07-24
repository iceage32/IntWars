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

        stats->setCurrentHealth(445f);
        stats->setMaxHealth(445f);
        stats->setCurrentMana(215f);
        stats->setMaxMana(215f);
        stats->setBaseAd(52f);
        stats->setRange(175f);
        stats->setMovementSpeed(345f);
        stats->setArmor(20f);
        stats->setMagicArmor(30f);
        stats->setHp5(7f);
        stats->setMp5(6.5f);
    }

};

#endif