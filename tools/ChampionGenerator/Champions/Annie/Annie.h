#ifndef _CHAMPION_ANNIE_H
#define _CHAMPION_ANNIE_H

#include "Champion.h"
#include "Disintegrate.h"
#include "Incinerate.h"
#include "MoltenShield.h"
#include "SummonTibbers.h"

class Annie : public Champion {

    public:
    Annie(Map* map, uint32 id) : Champion("Annie", map, id) {
        spells.push_back(new Disintegrate(this));
        spells.push_back(new Incinerate(this));
        spells.push_back(new MoltenShield(this));
        spells.push_back(new SummonTibbers(this));

        stats->setCurrentHealth(384f);
        stats->setMaxHealth(384f);
        stats->setCurrentMana(250f);
        stats->setMaxMana(250f);
        stats->setBaseAd(48f);
        stats->setRange(625f);
        stats->setMovementSpeed(335f);
        stats->setArmor(12.5f);
        stats->setMagicArmor(30f);
        stats->setHp5(4.5f);
        stats->setMp5(6.9f);
    }

};

#endif