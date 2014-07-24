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

        stats->setCurrentHealth(435f);
        stats->setMaxHealth(435f);
        stats->setCurrentMana(212f);
        stats->setMaxMana(212f);
        stats->setBaseAd(46.5f);
        stats->setRange(550f);
        stats->setMovementSpeed(325f);
        stats->setArmor(19f);
        stats->setMagicArmor(30f);
        stats->setHp5(5.1f);
        stats->setMp5(6.95f);
    }

};

#endif