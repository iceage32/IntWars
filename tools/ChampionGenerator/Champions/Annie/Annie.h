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

        stats->setCurrentHealth(384.0f);
        stats->setMaxHealth(384.0f);
        stats->setCurrentMana(250.0f);
        stats->setMaxMana(250.0f);
        stats->setBaseAd(48.0f);
        stats->setRange(625.0f);
        stats->setMovementSpeed(335.0f);
        stats->setArmor(12.5f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(4.5f);
        stats->setMp5(6.9f);
    }

};

#endif