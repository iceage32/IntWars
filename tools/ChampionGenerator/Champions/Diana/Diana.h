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

        stats->setCurrentHealth(438f);
        stats->setMaxHealth(438f);
        stats->setCurrentMana(230f);
        stats->setMaxMana(230f);
        stats->setBaseAd(48f);
        stats->setRange(150f);
        stats->setMovementSpeed(345f);
        stats->setArmor(20f);
        stats->setMagicArmor(30f);
        stats->setHp5(6f);
        stats->setMp5(7f);
    }

};

#endif