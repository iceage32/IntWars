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

        stats->setCurrentHealth(365f);
        stats->setMaxHealth(365f);
        stats->setCurrentMana(220f);
        stats->setMaxMana(220f);
        stats->setBaseAd(48f);
        stats->setRange(550f);
        stats->setMovementSpeed(325f);
        stats->setArmor(14f);
        stats->setMagicArmor(30f);
        stats->setHp5(6f);
        stats->setMp5(5f);
    }

};

#endif