#ifndef _CHAMPION_ZED_H
#define _CHAMPION_ZED_H

#include "Champion.h"
#include "RazorShuriken.h"
#include "LivingShadow.h"
#include "ShadowSlash.h"
#include "DeathMark.h"

class Zed : public Champion {

    public:
    Zed(Map* map, uint32 id) : Champion("Zed", map, id) {
        spells.push_back(new RazorShuriken(this));
        spells.push_back(new LivingShadow(this));
        spells.push_back(new ShadowSlash(this));
        spells.push_back(new DeathMark(this));

        stats->setCurrentHealth(445.0f);
        stats->setMaxHealth(445.0f);
        stats->setCurrentMana(200.0f);
        stats->setMaxMana(200.0f);
        stats->setBaseAd(49.0f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(345.0f);
        stats->setArmor(21.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(6.0f);
        stats->setMp5(50.0f);
    }

};

#endif