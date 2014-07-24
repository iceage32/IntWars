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

        stats->setCurrentHealth(380f);
        stats->setMaxHealth(380f);
        stats->setCurrentMana(170f);
        stats->setMaxMana(170f);
        stats->setBaseAd(50f);
        stats->setRange(525f);
        stats->setMovementSpeed(325f);
        stats->setArmor(17f);
        stats->setMagicArmor(30f);
        stats->setHp5(5f);
        stats->setMp5(5f);
    }

};

#endif