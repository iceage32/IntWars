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

        stats->setCurrentHealth(440f);
        stats->setMaxHealth(440f);
        stats->setCurrentMana(260f);
        stats->setMaxMana(260f);
        stats->setBaseAd(50f);
        stats->setRange(125f);
        stats->setMovementSpeed(350f);
        stats->setArmor(21f);
        stats->setMagicArmor(30f);
        stats->setHp5(7.25f);
        stats->setMp5(6.75f);
    }

};

#endif