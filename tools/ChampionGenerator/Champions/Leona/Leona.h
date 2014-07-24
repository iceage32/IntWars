#ifndef _CHAMPION_LEONA_H
#define _CHAMPION_LEONA_H

#include "Champion.h"
#include "ShieldofDaybreak.h"
#include "Eclipse.h"
#include "ZenithBlade.h"
#include "SolarFlare.h"

class Leona : public Champion {

    public:
    Leona(Map* map, uint32 id) : Champion("Leona", map, id) {
        spells.push_back(new ShieldofDaybreak(this));
        spells.push_back(new Eclipse(this));
        spells.push_back(new ZenithBlade(this));
        spells.push_back(new SolarFlare(this));

        stats->setCurrentHealth(430.0f);
        stats->setMaxHealth(430.0f);
        stats->setCurrentMana(235.0f);
        stats->setMaxMana(235.0f);
        stats->setBaseAd(55.0f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(335.0f);
        stats->setArmor(22.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.0f);
        stats->setMp5(7.0f);
    }

};

#endif