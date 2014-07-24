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

        stats->setCurrentHealth(378f);
        stats->setMaxHealth(378f);
        stats->setCurrentMana(200f);
        stats->setMaxMana(200f);
        stats->setBaseAd(44.5f);
        stats->setRange(500f);
        stats->setMovementSpeed(330f);
        stats->setArmor(18f);
        stats->setMagicArmor(30f);
        stats->setHp5(4.65f);
        stats->setMp5(6.45f);
    }

};

#endif