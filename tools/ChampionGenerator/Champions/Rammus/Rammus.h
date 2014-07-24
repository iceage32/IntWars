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

        stats->setCurrentHealth(420.0f);
        stats->setMaxHealth(420.0f);
        stats->setCurrentMana(255.0f);
        stats->setMaxMana(255.0f);
        stats->setBaseAd(50.0f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(335.0f);
        stats->setArmor(25.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.0f);
        stats->setMp5(7.0f);
    }

};

#endif