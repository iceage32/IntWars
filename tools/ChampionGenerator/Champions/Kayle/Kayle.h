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

        stats->setCurrentHealth(418f);
        stats->setMaxHealth(418f);
        stats->setCurrentMana(255f);
        stats->setMaxMana(255f);
        stats->setBaseAd(53.3f);
        stats->setRange(125f);
        stats->setMovementSpeed(335f);
        stats->setArmor(21f);
        stats->setMagicArmor(30f);
        stats->setHp5(7f);
        stats->setMp5(6.9f);
    }

};

#endif