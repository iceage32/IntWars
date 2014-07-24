#ifndef _CHAMPION_DIANA_H
#define _CHAMPION_DIANA_H

#include "Champion.h"
#include "CrescentStrike.h"
#include "PaleCascade.h"
#include "Moonfall.h"
#include "LunarRush.h"

class Diana : public Champion {

    public:
    Diana(Map* map, uint32 id) : Champion("Diana", map, id) {
        spells.push_back(new CrescentStrike(this));
        spells.push_back(new PaleCascade(this));
        spells.push_back(new Moonfall(this));
        spells.push_back(new LunarRush(this));

        stats->setCurrentHealth(438.0f);
        stats->setMaxHealth(438.0f);
        stats->setCurrentMana(230.0f);
        stats->setMaxMana(230.0f);
        stats->setBaseAd(48.0f);
        stats->setRange(150.0f);
        stats->setMovementSpeed(345.0f);
        stats->setArmor(20.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(6.0f);
        stats->setMp5(7.0f);
    }

};

#endif