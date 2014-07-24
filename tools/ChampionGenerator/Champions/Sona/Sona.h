#ifndef _CHAMPION_SONA_H
#define _CHAMPION_SONA_H

#include "Champion.h"
#include "HymnofValor.h"
#include "AriaofPerseverance.h"
#include "SongofCelerity.h"
#include "Crescendo.h"

class Sona : public Champion {

    public:
    Sona(Map* map, uint32 id) : Champion("Sona", map, id) {
        spells.push_back(new HymnofValor(this));
        spells.push_back(new AriaofPerseverance(this));
        spells.push_back(new SongofCelerity(this));
        spells.push_back(new Crescendo(this));

        stats->setCurrentHealth(380f);
        stats->setMaxHealth(380f);
        stats->setCurrentMana(265f);
        stats->setMaxMana(265f);
        stats->setBaseAd(47f);
        stats->setRange(550f);
        stats->setMovementSpeed(330f);
        stats->setArmor(12f);
        stats->setMagicArmor(30f);
        stats->setHp5(4.5f);
        stats->setMp5(7f);
    }

};

#endif