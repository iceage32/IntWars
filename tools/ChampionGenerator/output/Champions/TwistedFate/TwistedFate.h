#ifndef _CHAMPION_TWISTEDFATE_H
#define _CHAMPION_TWISTEDFATE_H

#include "Champion.h"
#include "WildCards.h"
#include "PickACard.h"
#include "StackedDeck.h"
#include "Destiny.h"

class TwistedFate : public Champion {

    public:
    TwistedFate(Map* map, uint32 id) : Champion("TwistedFate", map, id) {
        spells.push_back(new WildCards(this));
        spells.push_back(new PickACard(this));
        spells.push_back(new StackedDeck(this));
        spells.push_back(new Destiny(this));

        stats->setCurrentHealth(384.0f);
        stats->setMaxHealth(384.0f);
        stats->setCurrentMana(202.0f);
        stats->setMaxMana(202.0f);
        stats->setBaseAd(46.41f);
        stats->setRange(525.0f);
        stats->setMovementSpeed(330.0f);
        stats->setArmor(15.25f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(4.5f);
        stats->setMp5(6.5f);
    }

};

#endif