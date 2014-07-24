#ifndef _CHAMPION_AKALI_H
#define _CHAMPION_AKALI_H

#include "Champion.h"
#include "MarkoftheAssassin.h"
#include "TwilightShroud.h"
#include "CrescentSlash.h"
#include "ShadowDance.h"

class Akali : public Champion {

    public:
    Akali(Map* map, uint32 id) : Champion("Akali", map, id) {
        spells.push_back(new MarkoftheAssassin(this));
        spells.push_back(new TwilightShroud(this));
        spells.push_back(new CrescentSlash(this));
        spells.push_back(new ShadowDance(this));

        stats->setCurrentHealth(445.0f);
        stats->setMaxHealth(445.0f);
        stats->setCurrentMana(200.0f);
        stats->setMaxMana(200.0f);
        stats->setBaseAd(53.0f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(350.0f);
        stats->setArmor(20.5f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.25f);
        stats->setMp5(50.0f);
    }

};

#endif