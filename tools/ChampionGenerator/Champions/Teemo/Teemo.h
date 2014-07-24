#ifndef _CHAMPION_TEEMO_H
#define _CHAMPION_TEEMO_H

#include "Champion.h"
#include "BlindingDart.h"
#include "MoveQuick.h"
#include "ToxicShot.h"
#include "NoxiousTrap.h"

class Teemo : public Champion {

    public:
    Teemo(Map* map, uint32 id) : Champion("Teemo", map, id) {
        spells.push_back(new BlindingDart(this));
        spells.push_back(new MoveQuick(this));
        spells.push_back(new ToxicShot(this));
        spells.push_back(new NoxiousTrap(this));

        stats->setCurrentHealth(378.0f);
        stats->setMaxHealth(378.0f);
        stats->setCurrentMana(200.0f);
        stats->setMaxMana(200.0f);
        stats->setBaseAd(44.5f);
        stats->setRange(500.0f);
        stats->setMovementSpeed(330.0f);
        stats->setArmor(18.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(4.65f);
        stats->setMp5(6.45f);
    }

};

#endif