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

        stats->setCurrentHealth(425f);
        stats->setMaxHealth(425f);
        stats->setCurrentMana(0f);
        stats->setMaxMana(0f);
        stats->setBaseAd(53f);
        stats->setRange(125f);
        stats->setMovementSpeed(345f);
        stats->setArmor(21f);
        stats->setMagicArmor(30f);
        stats->setHp5(6.95f);
        stats->setMp5(0f);
    }

};

#endif