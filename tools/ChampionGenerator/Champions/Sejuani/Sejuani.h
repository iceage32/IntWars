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

        stats->setCurrentHealth(440f);
        stats->setMaxHealth(440f);
        stats->setCurrentMana(220f);
        stats->setMaxMana(220f);
        stats->setBaseAd(52f);
        stats->setRange(125f);
        stats->setMovementSpeed(340f);
        stats->setArmor(24.5f);
        stats->setMagicArmor(30f);
        stats->setHp5(7.25f);
        stats->setMp5(6.45f);
    }

};

#endif