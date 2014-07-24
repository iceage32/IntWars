#ifndef _CHAMPION_GAREN_H
#define _CHAMPION_GAREN_H

#include "Champion.h"
#include "DecisiveStrike.h"
#include "Courage.h"
#include "Judgment.h"
#include "DemacianJustice.h"

class Garen : public Champion {

    public:
    Garen(Map* map, uint32 id) : Champion("Garen", map, id) {
        spells.push_back(new DecisiveStrike(this));
        spells.push_back(new Courage(this));
        spells.push_back(new Judgment(this));
        spells.push_back(new DemacianJustice(this));

        stats->setCurrentHealth(455.0f);
        stats->setMaxHealth(455.0f);
        stats->setCurrentMana(0.0f);
        stats->setMaxMana(0.0f);
        stats->setBaseAd(52.0f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(345.0f);
        stats->setArmor(23.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.0f);
        stats->setMp5(0.0f);
    }

};

#endif