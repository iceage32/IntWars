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

        stats->setCurrentHealth(444.0f);
        stats->setMaxHealth(444.0f);
        stats->setCurrentMana(180.0f);
        stats->setMaxMana(180.0f);
        stats->setBaseAd(55.0f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(355.0f);
        stats->setArmor(19.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(6.5f);
        stats->setMp5(6.5f);
    }

};

#endif