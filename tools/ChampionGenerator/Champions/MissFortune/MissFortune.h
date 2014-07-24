#ifndef _CHAMPION_MISSFORTUNE_H
#define _CHAMPION_MISSFORTUNE_H

#include "Champion.h"
#include "DoubleUp.h"
#include "ImpureShots.h"
#include "MakeItRain.h"
#include "BulletTime.h"

class MissFortune : public Champion {

    public:
    MissFortune(Map* map, uint32 id) : Champion("MissFortune", map, id) {
        spells.push_back(new DoubleUp(this));
        spells.push_back(new ImpureShots(this));
        spells.push_back(new MakeItRain(this));
        spells.push_back(new BulletTime(this));

        stats->setCurrentHealth(435.0f);
        stats->setMaxHealth(435.0f);
        stats->setCurrentMana(212.0f);
        stats->setMaxMana(212.0f);
        stats->setBaseAd(46.5f);
        stats->setRange(550.0f);
        stats->setMovementSpeed(325.0f);
        stats->setArmor(19.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(5.1f);
        stats->setMp5(6.95f);
    }

};

#endif