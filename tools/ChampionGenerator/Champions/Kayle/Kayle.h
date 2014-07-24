#ifndef _CHAMPION_KAYLE_H
#define _CHAMPION_KAYLE_H

#include "Champion.h"
#include "Reckoning.h"
#include "DivineBlessing.h"
#include "RighteousFury.h"
#include "Intervention.h"

class Kayle : public Champion {

    public:
    Kayle(Map* map, uint32 id) : Champion("Kayle", map, id) {
        spells.push_back(new Reckoning(this));
        spells.push_back(new DivineBlessing(this));
        spells.push_back(new RighteousFury(this));
        spells.push_back(new Intervention(this));

        stats->setCurrentHealth(418.0f);
        stats->setMaxHealth(418.0f);
        stats->setCurrentMana(255.0f);
        stats->setMaxMana(255.0f);
        stats->setBaseAd(53.3f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(335.0f);
        stats->setArmor(21.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.0f);
        stats->setMp5(6.9f);
    }

};

#endif