#ifndef _CHAMPION_LULU_H
#define _CHAMPION_LULU_H

#include "Champion.h"
#include "Glitterlance.h"
#include "Whimsy.h"
#include "HelpPix.h"
#include "WildGrowth.h"

class Lulu : public Champion {

    public:
    Lulu(Map* map, uint32 id) : Champion("Lulu", map, id) {
        spells.push_back(new Glitterlance(this));
        spells.push_back(new Whimsy(this));
        spells.push_back(new HelpPix(this));
        spells.push_back(new WildGrowth(this));

        stats->setCurrentHealth(415f);
        stats->setMaxHealth(415f);
        stats->setCurrentMana(200f);
        stats->setMaxMana(200f);
        stats->setBaseAd(44f);
        stats->setRange(550f);
        stats->setMovementSpeed(325f);
        stats->setArmor(13f);
        stats->setMagicArmor(30f);
        stats->setHp5(5f);
        stats->setMp5(5f);
    }

};

#endif