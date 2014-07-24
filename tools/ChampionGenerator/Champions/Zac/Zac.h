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

        stats->setCurrentHealth(455f);
        stats->setMaxHealth(455f);
        stats->setCurrentMana(0f);
        stats->setMaxMana(0f);
        stats->setBaseAd(54f);
        stats->setRange(125f);
        stats->setMovementSpeed(335f);
        stats->setArmor(18f);
        stats->setMagicArmor(30f);
        stats->setHp5(7f);
        stats->setMp5(0f);
    }

};

#endif