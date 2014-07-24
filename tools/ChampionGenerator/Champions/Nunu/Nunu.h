#ifndef _CHAMPION_NUNU_H
#define _CHAMPION_NUNU_H

#include "Champion.h"
#include "Consume.h"
#include "BloodBoil.h"
#include "IceBlast.h"
#include "AbsoluteZero.h"

class Nunu : public Champion {

    public:
    Nunu(Map* map, uint32 id) : Champion("Nunu", map, id) {
        spells.push_back(new Consume(this));
        spells.push_back(new BloodBoil(this));
        spells.push_back(new IceBlast(this));
        spells.push_back(new AbsoluteZero(this));

        stats->setCurrentHealth(437.0f);
        stats->setMaxHealth(437.0f);
        stats->setCurrentMana(213.0f);
        stats->setMaxMana(213.0f);
        stats->setBaseAd(51.06f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(350.0f);
        stats->setArmor(20.5f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.05f);
        stats->setMp5(6.6f);
    }

};

#endif