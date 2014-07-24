#ifndef _CHAMPION_VOLIBEAR_H
#define _CHAMPION_VOLIBEAR_H

#include "Champion.h"
#include "RollingThunder.h"
#include "Frenzy.h"
#include "MajesticRoar.h"
#include "ThunderClaws.h"

class Volibear : public Champion {

    public:
    Volibear(Map* map, uint32 id) : Champion("Volibear", map, id) {
        spells.push_back(new RollingThunder(this));
        spells.push_back(new Frenzy(this));
        spells.push_back(new MajesticRoar(this));
        spells.push_back(new ThunderClaws(this));

        stats->setCurrentHealth(440f);
        stats->setMaxHealth(440f);
        stats->setCurrentMana(220f);
        stats->setMaxMana(220f);
        stats->setBaseAd(54f);
        stats->setRange(125f);
        stats->setMovementSpeed(345f);
        stats->setArmor(20.5f);
        stats->setMagicArmor(30f);
        stats->setHp5(7f);
        stats->setMp5(7f);
    }

};

#endif