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

        stats->setCurrentHealth(380.0f);
        stats->setMaxHealth(380.0f);
        stats->setCurrentMana(250.0f);
        stats->setMaxMana(250.0f);
        stats->setBaseAd(51.66f);
        stats->setRange(550.0f);
        stats->setMovementSpeed(340.0f);
        stats->setArmor(16.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(4.5f);
        stats->setMp5(7.0f);
    }

};

#endif