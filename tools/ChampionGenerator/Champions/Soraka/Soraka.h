#ifndef _CHAMPION_SORAKA_H
#define _CHAMPION_SORAKA_H

#include "Champion.h"
#include "Starcall.h"
#include "AstralBlessing.h"
#include "Infuse.h"
#include "Wish.h"

class Soraka : public Champion {

    public:
    Soraka(Map* map, uint32 id) : Champion("Soraka", map, id) {
        spells.push_back(new Starcall(this));
        spells.push_back(new AstralBlessing(this));
        spells.push_back(new Infuse(this));
        spells.push_back(new Wish(this));

        stats->setCurrentHealth(405f);
        stats->setMaxHealth(405f);
        stats->setCurrentMana(240f);
        stats->setMaxMana(240f);
        stats->setBaseAd(48.8f);
        stats->setRange(550f);
        stats->setMovementSpeed(340f);
        stats->setArmor(17f);
        stats->setMagicArmor(30f);
        stats->setHp5(4.5f);
        stats->setMp5(6.8f);
    }

};

#endif