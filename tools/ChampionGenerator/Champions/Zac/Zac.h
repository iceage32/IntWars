#ifndef _CHAMPION_ZAC_H
#define _CHAMPION_ZAC_H

#include "Champion.h"
#include "StretchingStrike.h"
#include "UnstableMatter.h"
#include "ElasticSlingshot.h"
#include "LetsBounce.h"

class Zac : public Champion {

    public:
    Zac(Map* map, uint32 id) : Champion("Zac", map, id) {
        spells.push_back(new StretchingStrike(this));
        spells.push_back(new UnstableMatter(this));
        spells.push_back(new ElasticSlingshot(this));
        spells.push_back(new LetsBounce(this));

        stats->setCurrentHealth(455.0f);
        stats->setMaxHealth(455.0f);
        stats->setCurrentMana(0.0f);
        stats->setMaxMana(0.0f);
        stats->setBaseAd(54.0f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(335.0f);
        stats->setArmor(18.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.0f);
        stats->setMp5(0.0f);
    }

};

#endif