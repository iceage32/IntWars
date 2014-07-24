#ifndef _CHAMPION_VAYNE_H
#define _CHAMPION_VAYNE_H

#include "Champion.h"
#include "Tumble.h"
#include "SilverBolts.h"
#include "Condemn.h"
#include "FinalHour.h"

class Vayne : public Champion {

    public:
    Vayne(Map* map, uint32 id) : Champion("Vayne", map, id) {
        spells.push_back(new Tumble(this));
        spells.push_back(new SilverBolts(this));
        spells.push_back(new Condemn(this));
        spells.push_back(new FinalHour(this));

        stats->setCurrentHealth(359.0f);
        stats->setMaxHealth(359.0f);
        stats->setCurrentMana(173.0f);
        stats->setMaxMana(173.0f);
        stats->setBaseAd(50.0f);
        stats->setRange(550.0f);
        stats->setMovementSpeed(330.0f);
        stats->setArmor(13.3f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(4.5f);
        stats->setMp5(6.3f);
    }

};

#endif