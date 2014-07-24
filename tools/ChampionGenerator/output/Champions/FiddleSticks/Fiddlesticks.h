#ifndef _CHAMPION_FIDDLESTICKS_H
#define _CHAMPION_FIDDLESTICKS_H

#include "Champion.h"
#include "Terrify.h"
#include "Drain.h"
#include "DarkWind.h"
#include "Crowstorm.h"

class Fiddlesticks : public Champion {

    public:
    Fiddlesticks(Map* map, uint32 id) : Champion("Fiddlesticks", map, id) {
        spells.push_back(new Terrify(this));
        spells.push_back(new Drain(this));
        spells.push_back(new DarkWind(this));
        spells.push_back(new Crowstorm(this));

        stats->setCurrentHealth(390.0f);
        stats->setMaxHealth(390.0f);
        stats->setCurrentMana(251.0f);
        stats->setMaxMana(251.0f);
        stats->setBaseAd(45.95f);
        stats->setRange(480.0f);
        stats->setMovementSpeed(335.0f);
        stats->setArmor(15.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(4.6f);
        stats->setMp5(6.9f);
    }

};

#endif