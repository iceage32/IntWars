#ifndef _CHAMPION_RAMMUS_H
#define _CHAMPION_RAMMUS_H

#include "Champion.h"
#include "Powerball.h"
#include "DefensiveBallCurl.h"
#include "PuncturingTaunt.h"
#include "Tremors.h"

class Rammus : public Champion {

    public:
    Rammus(Map* map, uint32 id) : Champion("Rammus", map, id) {
        spells.push_back(new Powerball(this));
        spells.push_back(new DefensiveBallCurl(this));
        spells.push_back(new PuncturingTaunt(this));
        spells.push_back(new Tremors(this));

        stats->setCurrentHealth(420f);
        stats->setMaxHealth(420f);
        stats->setCurrentMana(255f);
        stats->setMaxMana(255f);
        stats->setBaseAd(50f);
        stats->setRange(125f);
        stats->setMovementSpeed(335f);
        stats->setArmor(25f);
        stats->setMagicArmor(30f);
        stats->setHp5(7f);
        stats->setMp5(7f);
    }

};

#endif