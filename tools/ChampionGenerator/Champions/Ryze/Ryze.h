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

        stats->setCurrentHealth(414f);
        stats->setMaxHealth(414f);
        stats->setCurrentMana(250f);
        stats->setMaxMana(250f);
        stats->setBaseAd(52f);
        stats->setRange(550f);
        stats->setMovementSpeed(340f);
        stats->setArmor(15f);
        stats->setMagicArmor(30f);
        stats->setHp5(4.35f);
        stats->setMp5(7f);
    }

};

#endif