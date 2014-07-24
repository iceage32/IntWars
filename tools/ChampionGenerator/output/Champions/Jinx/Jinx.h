#ifndef _CHAMPION_JINX_H
#define _CHAMPION_JINX_H

#include "Champion.h"
#include "Switcheroo.h"
#include "Zap.h"
#include "FlameChompers.h"
#include "SuperMegaDeathRocket.h"

class Jinx : public Champion {

    public:
    Jinx(Map* map, uint32 id) : Champion("Jinx", map, id) {
        spells.push_back(new Switcheroo(this));
        spells.push_back(new Zap(this));
        spells.push_back(new FlameChompers(this));
        spells.push_back(new SuperMegaDeathRocket(this));

        stats->setCurrentHealth(380.0f);
        stats->setMaxHealth(380.0f);
        stats->setCurrentMana(170.0f);
        stats->setMaxMana(170.0f);
        stats->setBaseAd(50.0f);
        stats->setRange(525.0f);
        stats->setMovementSpeed(325.0f);
        stats->setArmor(17.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(5.0f);
        stats->setMp5(5.0f);
    }

};

#endif