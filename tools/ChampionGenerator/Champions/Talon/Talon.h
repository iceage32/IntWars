#ifndef _CHAMPION_TALON_H
#define _CHAMPION_TALON_H

#include "Champion.h"
#include "NoxianDiplomacy.h"
#include "Rake.h"
#include "Cutthroat.h"
#include "ShadowAssault.h"

class Talon : public Champion {

    public:
    Talon(Map* map, uint32 id) : Champion("Talon", map, id) {
        spells.push_back(new NoxianDiplomacy(this));
        spells.push_back(new Rake(this));
        spells.push_back(new Cutthroat(this));
        spells.push_back(new ShadowAssault(this));

        stats->setCurrentHealth(440.0f);
        stats->setMaxHealth(440.0f);
        stats->setCurrentMana(260.0f);
        stats->setMaxMana(260.0f);
        stats->setBaseAd(50.0f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(350.0f);
        stats->setArmor(21.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.25f);
        stats->setMp5(6.75f);
    }

};

#endif