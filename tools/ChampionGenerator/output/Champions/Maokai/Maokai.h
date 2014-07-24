#ifndef _CHAMPION_MAOKAI_H
#define _CHAMPION_MAOKAI_H

#include "Champion.h"
#include "ArcaneSmash.h"
#include "TwistedAdvance.h"
#include "SaplingToss.h"
#include "VengefulMaelstrom.h"

class Maokai : public Champion {

    public:
    Maokai(Map* map, uint32 id) : Champion("Maokai", map, id) {
        spells.push_back(new ArcaneSmash(this));
        spells.push_back(new TwistedAdvance(this));
        spells.push_back(new SaplingToss(this));
        spells.push_back(new VengefulMaelstrom(this));

        stats->setCurrentHealth(421.0f);
        stats->setMaxHealth(421.0f);
        stats->setCurrentMana(250.0f);
        stats->setMaxMana(250.0f);
        stats->setBaseAd(58.0f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(335.0f);
        stats->setArmor(22.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.25f);
        stats->setMp5(6.45f);
    }

};

#endif