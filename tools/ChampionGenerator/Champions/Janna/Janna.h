#ifndef _CHAMPION_JANNA_H
#define _CHAMPION_JANNA_H

#include "Champion.h"
#include "HowlingGale.h"
#include "Zephyr.h"
#include "EyeOfTheStorm.h"
#include "Monsoon.h"

class Janna : public Champion {

    public:
    Janna(Map* map, uint32 id) : Champion("Janna", map, id) {
        spells.push_back(new HowlingGale(this));
        spells.push_back(new Zephyr(this));
        spells.push_back(new EyeOfTheStorm(this));
        spells.push_back(new Monsoon(this));

        stats->setCurrentHealth(356f);
        stats->setMaxHealth(356f);
        stats->setCurrentMana(302f);
        stats->setMaxMana(302f);
        stats->setBaseAd(49f);
        stats->setRange(475f);
        stats->setMovementSpeed(335f);
        stats->setArmor(13f);
        stats->setMagicArmor(30f);
        stats->setHp5(4.5f);
        stats->setMp5(6.9f);
    }

};

#endif