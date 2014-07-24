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

        stats->setCurrentHealth(421f);
        stats->setMaxHealth(421f);
        stats->setCurrentMana(250f);
        stats->setMaxMana(250f);
        stats->setBaseAd(58f);
        stats->setRange(125f);
        stats->setMovementSpeed(335f);
        stats->setArmor(22f);
        stats->setMagicArmor(30f);
        stats->setHp5(7.25f);
        stats->setMp5(6.45f);
    }

};

#endif