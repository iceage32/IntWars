#ifndef _CHAMPION_THRESH_H
#define _CHAMPION_THRESH_H

#include "Champion.h"
#include "DeathSentence.h"
#include "DarkPassage.h"
#include "Flay.h"
#include "TheBox.h"

class Thresh : public Champion {

    public:
    Thresh(Map* map, uint32 id) : Champion("Thresh", map, id) {
        spells.push_back(new DeathSentence(this));
        spells.push_back(new DarkPassage(this));
        spells.push_back(new Flay(this));
        spells.push_back(new TheBox(this));

        stats->setCurrentHealth(411.0f);
        stats->setMaxHealth(411.0f);
        stats->setCurrentMana(200.0f);
        stats->setMaxMana(200.0f);
        stats->setBaseAd(46.0f);
        stats->setRange(450.0f);
        stats->setMovementSpeed(335.0f);
        stats->setArmor(16.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(6.0f);
        stats->setMp5(5.0f);
    }

};

#endif