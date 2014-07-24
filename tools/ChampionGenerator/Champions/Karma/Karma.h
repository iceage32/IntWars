#ifndef _CHAMPION_KARMA_H
#define _CHAMPION_KARMA_H

#include "Champion.h"
#include "InnerFlame.h"
#include "FocusedResolve.h"
#include "Inspire.h"
#include "Mantra.h"

class Karma : public Champion {

    public:
    Karma(Map* map, uint32 id) : Champion("Karma", map, id) {
        spells.push_back(new InnerFlame(this));
        spells.push_back(new FocusedResolve(this));
        spells.push_back(new Inspire(this));
        spells.push_back(new Mantra(this));

        stats->setCurrentHealth(383f);
        stats->setMaxHealth(383f);
        stats->setCurrentMana(290f);
        stats->setMaxMana(290f);
        stats->setBaseAd(50f);
        stats->setRange(525f);
        stats->setMovementSpeed(335f);
        stats->setArmor(14f);
        stats->setMagicArmor(30f);
        stats->setHp5(4.7f);
        stats->setMp5(6.8f);
    }

};

#endif