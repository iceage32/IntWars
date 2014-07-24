#ifndef _CHAMPION_LISSANDRA_H
#define _CHAMPION_LISSANDRA_H

#include "Champion.h"
#include "IceShard.h"
#include "RingofFrost.h"
#include "GlacialPath.h"
#include "FrozenTomb.h"

class Lissandra : public Champion {

    public:
    Lissandra(Map* map, uint32 id) : Champion("Lissandra", map, id) {
        spells.push_back(new IceShard(this));
        spells.push_back(new RingofFrost(this));
        spells.push_back(new GlacialPath(this));
        spells.push_back(new FrozenTomb(this));

        stats->setCurrentHealth(365.0f);
        stats->setMaxHealth(365.0f);
        stats->setCurrentMana(220.0f);
        stats->setMaxMana(220.0f);
        stats->setBaseAd(48.0f);
        stats->setRange(550.0f);
        stats->setMovementSpeed(325.0f);
        stats->setArmor(14.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(6.0f);
        stats->setMp5(5.0f);
    }

};

#endif