#ifndef _CHAMPION_CORKI_H
#define _CHAMPION_CORKI_H

#include "Champion.h"
#include "PhosphorusBomb.h"
#include "Valkyrie.h"
#include "GatlingGun.h"
#include "MissileBarrage.h"

class Corki : public Champion {

    public:
    Corki(Map* map, uint32 id) : Champion("Corki", map, id) {
        spells.push_back(new PhosphorusBomb(this));
        spells.push_back(new Valkyrie(this));
        spells.push_back(new GatlingGun(this));
        spells.push_back(new MissileBarrage(this));

        stats->setCurrentHealth(375f);
        stats->setMaxHealth(375f);
        stats->setCurrentMana(243f);
        stats->setMaxMana(243f);
        stats->setBaseAd(48.2f);
        stats->setRange(550f);
        stats->setMovementSpeed(325f);
        stats->setArmor(17.5f);
        stats->setMagicArmor(30f);
        stats->setHp5(4.5f);
        stats->setMp5(6.5f);
    }

};

#endif