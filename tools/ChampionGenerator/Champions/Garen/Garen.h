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

        stats->setCurrentHealth(455f);
        stats->setMaxHealth(455f);
        stats->setCurrentMana(0f);
        stats->setMaxMana(0f);
        stats->setBaseAd(52f);
        stats->setRange(125f);
        stats->setMovementSpeed(345f);
        stats->setArmor(23f);
        stats->setMagicArmor(30f);
        stats->setHp5(7f);
        stats->setMp5(0f);
    }

};

#endif