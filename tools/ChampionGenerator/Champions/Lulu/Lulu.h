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

        stats->setCurrentHealth(415.0f);
        stats->setMaxHealth(415.0f);
        stats->setCurrentMana(200.0f);
        stats->setMaxMana(200.0f);
        stats->setBaseAd(44.0f);
        stats->setRange(550.0f);
        stats->setMovementSpeed(325.0f);
        stats->setArmor(13.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(5.0f);
        stats->setMp5(5.0f);
    }

};

#endif