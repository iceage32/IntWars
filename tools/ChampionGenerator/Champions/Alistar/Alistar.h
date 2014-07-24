#ifndef _CHAMPION_ALISTAR_H
#define _CHAMPION_ALISTAR_H

#include "Champion.h"
#include "Pulverize.h"
#include "Headbutt.h"
#include "TriumphantRoar.h"
#include "UnbreakableWill.h"

class Alistar : public Champion {

    public:
    Alistar(Map* map, uint32 id) : Champion("Alistar", map, id) {
        spells.push_back(new Pulverize(this));
        spells.push_back(new Headbutt(this));
        spells.push_back(new TriumphantRoar(this));
        spells.push_back(new UnbreakableWill(this));

        stats->setCurrentHealth(442f);
        stats->setMaxHealth(442f);
        stats->setCurrentMana(215f);
        stats->setMaxMana(215f);
        stats->setBaseAd(55.03f);
        stats->setRange(125f);
        stats->setMovementSpeed(330f);
        stats->setArmor(18.5f);
        stats->setMagicArmor(30f);
        stats->setHp5(7.25f);
        stats->setMp5(6.45f);
    }

};

#endif