#ifndef _CHAMPION_IRELIA_H
#define _CHAMPION_IRELIA_H

#include "Champion.h"
#include "Bladesurge.h"
#include "HitenStyle.h"
#include "EquilibriumStrike.h"
#include "TranscendentBlades.h"

class Irelia : public Champion {

    public:
    Irelia(Map* map, uint32 id) : Champion("Irelia", map, id) {
        spells.push_back(new Bladesurge(this));
        spells.push_back(new HitenStyle(this));
        spells.push_back(new EquilibriumStrike(this));
        spells.push_back(new TranscendentBlades(this));

        stats->setCurrentHealth(456f);
        stats->setMaxHealth(456f);
        stats->setCurrentMana(230f);
        stats->setMaxMana(230f);
        stats->setBaseAd(56f);
        stats->setRange(125f);
        stats->setMovementSpeed(345f);
        stats->setArmor(19f);
        stats->setMagicArmor(30f);
        stats->setHp5(7.5f);
        stats->setMp5(7f);
    }

};

#endif