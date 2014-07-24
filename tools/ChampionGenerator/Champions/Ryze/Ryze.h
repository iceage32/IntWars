#ifndef _CHAMPION_RYZE_H
#define _CHAMPION_RYZE_H

#include "Champion.h"
#include "Overload.h"
#include "RunePrison.h"
#include "SpellFlux.h"
#include "DesperatePower.h"

class Ryze : public Champion {

    public:
    Ryze(Map* map, uint32 id) : Champion("Ryze", map, id) {
        spells.push_back(new Overload(this));
        spells.push_back(new RunePrison(this));
        spells.push_back(new SpellFlux(this));
        spells.push_back(new DesperatePower(this));

        stats->setCurrentHealth(414.0f);
        stats->setMaxHealth(414.0f);
        stats->setCurrentMana(250.0f);
        stats->setMaxMana(250.0f);
        stats->setBaseAd(52.0f);
        stats->setRange(550.0f);
        stats->setMovementSpeed(340.0f);
        stats->setArmor(15.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(4.35f);
        stats->setMp5(7.0f);
    }

};

#endif