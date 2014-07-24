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

        stats->setCurrentHealth(430f);
        stats->setMaxHealth(430f);
        stats->setCurrentMana(235f);
        stats->setMaxMana(235f);
        stats->setBaseAd(55f);
        stats->setRange(125f);
        stats->setMovementSpeed(335f);
        stats->setArmor(22f);
        stats->setMagicArmor(30f);
        stats->setHp5(7f);
        stats->setMp5(7f);
    }

};

#endif