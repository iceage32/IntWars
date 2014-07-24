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

        stats->setCurrentHealth(456.0f);
        stats->setMaxHealth(456.0f);
        stats->setCurrentMana(230.0f);
        stats->setMaxMana(230.0f);
        stats->setBaseAd(56.0f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(345.0f);
        stats->setArmor(19.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.5f);
        stats->setMp5(7.0f);
    }

};

#endif