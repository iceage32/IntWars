#ifndef _CHAMPION_EVELYNN_H
#define _CHAMPION_EVELYNN_H

#include "Champion.h"
#include "HateSpike.h"
#include "DarkFrenzy.h"
#include "Ravage.h"
#include "AgonysEmbrace.h"

class Evelynn : public Champion {

    public:
    Evelynn(Map* map, uint32 id) : Champion("Evelynn", map, id) {
        spells.push_back(new HateSpike(this));
        spells.push_back(new DarkFrenzy(this));
        spells.push_back(new Ravage(this));
        spells.push_back(new AgonysEmbrace(this));

        stats->setCurrentHealth(380f);
        stats->setMaxHealth(380f);
        stats->setCurrentMana(190f);
        stats->setMaxMana(190f);
        stats->setBaseAd(48f);
        stats->setRange(125f);
        stats->setMovementSpeed(340f);
        stats->setArmor(16f);
        stats->setMagicArmor(30f);
        stats->setHp5(8.9f);
        stats->setMp5(7.1f);
    }

};

#endif