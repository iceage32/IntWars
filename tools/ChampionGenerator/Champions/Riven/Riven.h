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

        stats->setCurrentHealth(414f);
        stats->setMaxHealth(414f);
        stats->setCurrentMana(0f);
        stats->setMaxMana(0f);
        stats->setBaseAd(51f);
        stats->setRange(125f);
        stats->setMovementSpeed(345f);
        stats->setArmor(19f);
        stats->setMagicArmor(30f);
        stats->setHp5(2.5f);
        stats->setMp5(0f);
    }

};

#endif