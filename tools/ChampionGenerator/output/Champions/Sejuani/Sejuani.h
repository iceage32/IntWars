#ifndef _CHAMPION_SEJUANI_H
#define _CHAMPION_SEJUANI_H

#include "Champion.h"
#include "ArcticAssault.h"
#include "FlailoftheNorthernWinds.h"
#include "Permafrost.h"
#include "GlacialPrison.h"

class Sejuani : public Champion {

    public:
    Sejuani(Map* map, uint32 id) : Champion("Sejuani", map, id) {
        spells.push_back(new ArcticAssault(this));
        spells.push_back(new FlailoftheNorthernWinds(this));
        spells.push_back(new Permafrost(this));
        spells.push_back(new GlacialPrison(this));

        stats->setCurrentHealth(440.0f);
        stats->setMaxHealth(440.0f);
        stats->setCurrentMana(220.0f);
        stats->setMaxMana(220.0f);
        stats->setBaseAd(52.0f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(340.0f);
        stats->setArmor(24.5f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.25f);
        stats->setMp5(6.45f);
    }

};

#endif