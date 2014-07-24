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

        stats->setCurrentHealth(389f);
        stats->setMaxHealth(389f);
        stats->setCurrentMana(220f);
        stats->setMaxMana(220f);
        stats->setBaseAd(46f);
        stats->setRange(550f);
        stats->setMovementSpeed(330f);
        stats->setArmor(18f);
        stats->setMagicArmor(30f);
        stats->setHp5(5f);
        stats->setMp5(6.5f);
    }

};

#endif