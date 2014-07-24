#ifndef _CHAMPION_FIZZ_H
#define _CHAMPION_FIZZ_H

#include "Champion.h"
#include "UrchinStrike.h"
#include "SeastoneTrident.h"
#include "PlayfulTrickster.h"
#include "ChumtheWaters.h"

class Fizz : public Champion {

    public:
    Fizz(Map* map, uint32 id) : Champion("Fizz", map, id) {
        spells.push_back(new UrchinStrike(this));
        spells.push_back(new SeastoneTrident(this));
        spells.push_back(new PlayfulTrickster(this));
        spells.push_back(new ChumtheWaters(this));

        stats->setCurrentHealth(414.0f);
        stats->setMaxHealth(414.0f);
        stats->setCurrentMana(200.0f);
        stats->setMaxMana(200.0f);
        stats->setBaseAd(53.0f);
        stats->setRange(175.0f);
        stats->setMovementSpeed(335.0f);
        stats->setArmor(16.7f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.0f);
        stats->setMp5(6.1f);
    }

};

#endif