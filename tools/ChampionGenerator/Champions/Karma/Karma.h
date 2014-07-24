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

        stats->setCurrentHealth(383.0f);
        stats->setMaxHealth(383.0f);
        stats->setCurrentMana(290.0f);
        stats->setMaxMana(290.0f);
        stats->setBaseAd(50.0f);
        stats->setRange(525.0f);
        stats->setMovementSpeed(335.0f);
        stats->setArmor(14.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(4.7f);
        stats->setMp5(6.8f);
    }

};

#endif