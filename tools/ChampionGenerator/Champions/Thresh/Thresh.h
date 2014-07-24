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

        stats->setCurrentHealth(411f);
        stats->setMaxHealth(411f);
        stats->setCurrentMana(200f);
        stats->setMaxMana(200f);
        stats->setBaseAd(46f);
        stats->setRange(450f);
        stats->setMovementSpeed(335f);
        stats->setArmor(16f);
        stats->setMagicArmor(30f);
        stats->setHp5(6f);
        stats->setMp5(5f);
    }

};

#endif