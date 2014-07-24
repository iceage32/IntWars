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

        stats->setCurrentHealth(440.0f);
        stats->setMaxHealth(440.0f);
        stats->setCurrentMana(220.0f);
        stats->setMaxMana(220.0f);
        stats->setBaseAd(54.0f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(345.0f);
        stats->setArmor(20.5f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.0f);
        stats->setMp5(7.0f);
    }

};

#endif