#ifndef _CHAMPION_MASTERYI_H
#define _CHAMPION_MASTERYI_H

#include "Champion.h"
#include "AlphaStrike.h"
#include "Meditate.h"
#include "WujuStyle.h"
#include "Highlander.h"

class MasterYi : public Champion {

    public:
    MasterYi(Map* map, uint32 id) : Champion("MasterYi", map, id) {
        spells.push_back(new AlphaStrike(this));
        spells.push_back(new Meditate(this));
        spells.push_back(new WujuStyle(this));
        spells.push_back(new Highlander(this));

        stats->setCurrentHealth(444f);
        stats->setMaxHealth(444f);
        stats->setCurrentMana(180f);
        stats->setMaxMana(180f);
        stats->setBaseAd(55f);
        stats->setRange(125f);
        stats->setMovementSpeed(355f);
        stats->setArmor(19f);
        stats->setMagicArmor(30f);
        stats->setHp5(6.5f);
        stats->setMp5(6.5f);
    }

};

#endif