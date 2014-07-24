#ifndef _CHAMPION_RIVEN_H
#define _CHAMPION_RIVEN_H

#include "Champion.h"
#include "BrokenWings.h"
#include "KiBurst.h"
#include "Valor.h"
#include "BladeoftheExile.h"

class Riven : public Champion {

    public:
    Riven(Map* map, uint32 id) : Champion("Riven", map, id) {
        spells.push_back(new BrokenWings(this));
        spells.push_back(new KiBurst(this));
        spells.push_back(new Valor(this));
        spells.push_back(new BladeoftheExile(this));

        stats->setCurrentHealth(414.0f);
        stats->setMaxHealth(414.0f);
        stats->setCurrentMana(0.0f);
        stats->setMaxMana(0.0f);
        stats->setBaseAd(51.0f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(345.0f);
        stats->setArmor(19.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(2.5f);
        stats->setMp5(0.0f);
    }

};

#endif