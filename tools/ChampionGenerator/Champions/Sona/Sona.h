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

        stats->setCurrentHealth(380.0f);
        stats->setMaxHealth(380.0f);
        stats->setCurrentMana(265.0f);
        stats->setMaxMana(265.0f);
        stats->setBaseAd(47.0f);
        stats->setRange(550.0f);
        stats->setMovementSpeed(330.0f);
        stats->setArmor(12.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(4.5f);
        stats->setMp5(7.0f);
    }

};

#endif