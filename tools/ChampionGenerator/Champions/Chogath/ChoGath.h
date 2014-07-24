#ifndef _CHAMPION_CHOGATH_H
#define _CHAMPION_CHOGATH_H

#include "Champion.h"
#include "Rupture.h"
#include "FeralScream.h"
#include "VorpalSpikes.h"
#include "Feast.h"

class ChoGath : public Champion {

    public:
    ChoGath(Map* map, uint32 id) : Champion("ChoGath", map, id) {
        spells.push_back(new Rupture(this));
        spells.push_back(new FeralScream(this));
        spells.push_back(new VorpalSpikes(this));
        spells.push_back(new Feast(this));

        stats->setCurrentHealth(440f);
        stats->setMaxHealth(440f);
        stats->setCurrentMana(205f);
        stats->setMaxMana(205f);
        stats->setBaseAd(54.1f);
        stats->setRange(125f);
        stats->setMovementSpeed(345f);
        stats->setArmor(23f);
        stats->setMagicArmor(30f);
        stats->setHp5(7.5f);
        stats->setMp5(6.45f);
    }

};

#endif