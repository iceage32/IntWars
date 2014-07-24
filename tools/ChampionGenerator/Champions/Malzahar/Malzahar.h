#ifndef _CHAMPION_MALZAHAR_H
#define _CHAMPION_MALZAHAR_H

#include "Champion.h"
#include "CalloftheVoid.h"
#include "NullZone.h"
#include "MaleficVisions.h"
#include "NetherGrasp.h"

class Malzahar : public Champion {

    public:
    Malzahar(Map* map, uint32 id) : Champion("Malzahar", map, id) {
        spells.push_back(new CalloftheVoid(this));
        spells.push_back(new NullZone(this));
        spells.push_back(new MaleficVisions(this));
        spells.push_back(new NetherGrasp(this));

        stats->setCurrentHealth(380f);
        stats->setMaxHealth(380f);
        stats->setCurrentMana(250f);
        stats->setMaxMana(250f);
        stats->setBaseAd(51.66f);
        stats->setRange(550f);
        stats->setMovementSpeed(340f);
        stats->setArmor(16f);
        stats->setMagicArmor(30f);
        stats->setHp5(4.5f);
        stats->setMp5(7f);
    }

};

#endif