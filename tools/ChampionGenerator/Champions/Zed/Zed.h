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

        stats->setCurrentHealth(445f);
        stats->setMaxHealth(445f);
        stats->setCurrentMana(200f);
        stats->setMaxMana(200f);
        stats->setBaseAd(49f);
        stats->setRange(125f);
        stats->setMovementSpeed(345f);
        stats->setArmor(21f);
        stats->setMagicArmor(30f);
        stats->setHp5(6f);
        stats->setMp5(50f);
    }

};

#endif