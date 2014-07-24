#ifndef _CHAMPION_KATARINA_H
#define _CHAMPION_KATARINA_H

#include "Champion.h"
#include "BouncingBlades.h"
#include "SinisterSteel.h"
#include "Shunpo.h"
#include "DeathLotus.h"

class Katarina : public Champion {

    public:
    Katarina(Map* map, uint32 id) : Champion("Katarina", map, id) {
        spells.push_back(new BouncingBlades(this));
        spells.push_back(new SinisterSteel(this));
        spells.push_back(new Shunpo(this));
        spells.push_back(new DeathLotus(this));

        stats->setCurrentHealth(425.0f);
        stats->setMaxHealth(425.0f);
        stats->setCurrentMana(0.0f);
        stats->setMaxMana(0.0f);
        stats->setBaseAd(53.0f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(345.0f);
        stats->setArmor(21.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(6.95f);
        stats->setMp5(0.0f);
    }

};

#endif