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

        stats->setCurrentHealth(405.0f);
        stats->setMaxHealth(405.0f);
        stats->setCurrentMana(240.0f);
        stats->setMaxMana(240.0f);
        stats->setBaseAd(48.8f);
        stats->setRange(550.0f);
        stats->setMovementSpeed(340.0f);
        stats->setArmor(17.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(4.5f);
        stats->setMp5(6.8f);
    }

};

#endif