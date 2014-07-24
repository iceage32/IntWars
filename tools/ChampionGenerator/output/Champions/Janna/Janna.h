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

        stats->setCurrentHealth(356.0f);
        stats->setMaxHealth(356.0f);
        stats->setCurrentMana(302.0f);
        stats->setMaxMana(302.0f);
        stats->setBaseAd(49.0f);
        stats->setRange(475.0f);
        stats->setMovementSpeed(335.0f);
        stats->setArmor(13.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(4.5f);
        stats->setMp5(6.9f);
    }

};

#endif