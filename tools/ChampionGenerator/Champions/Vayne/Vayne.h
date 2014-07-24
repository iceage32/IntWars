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

        stats->setCurrentHealth(359f);
        stats->setMaxHealth(359f);
        stats->setCurrentMana(173f);
        stats->setMaxMana(173f);
        stats->setBaseAd(50f);
        stats->setRange(550f);
        stats->setMovementSpeed(330f);
        stats->setArmor(13.3f);
        stats->setMagicArmor(30f);
        stats->setHp5(4.5f);
        stats->setMp5(6.3f);
    }

};

#endif