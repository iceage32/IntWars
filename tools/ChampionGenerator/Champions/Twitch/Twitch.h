#ifndef _CHAMPION_TWITCH_H
#define _CHAMPION_TWITCH_H

#include "Champion.h"
#include "Ambush.h"
#include "VenomCask.h"
#include "Contaminate.h"
#include "RatTaTatTat.h"

class Twitch : public Champion {

    public:
    Twitch(Map* map, uint32 id) : Champion("Twitch", map, id) {
        spells.push_back(new Ambush(this));
        spells.push_back(new VenomCask(this));
        spells.push_back(new Contaminate(this));
        spells.push_back(new RatTaTatTat(this));

        stats->setCurrentHealth(389.0f);
        stats->setMaxHealth(389.0f);
        stats->setCurrentMana(220.0f);
        stats->setMaxMana(220.0f);
        stats->setBaseAd(46.0f);
        stats->setRange(550.0f);
        stats->setMovementSpeed(330.0f);
        stats->setArmor(18.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(5.0f);
        stats->setMp5(6.5f);
    }

};

#endif