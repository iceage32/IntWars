#ifndef _CHAMPION_SIVIR_H
#define _CHAMPION_SIVIR_H

#include "Champion.h"
#include "BoomerangBlade.h"
#include "Ricochet.h"
#include "SpellShield.h"
#include "OnTheHunt.h"

class Sivir : public Champion {

    public:
    Sivir(Map* map, uint32 id) : Champion("Sivir", map, id) {
        spells.push_back(new BoomerangBlade(this));
        spells.push_back(new Ricochet(this));
        spells.push_back(new SpellShield(this));
        spells.push_back(new OnTheHunt(this));

        stats->setCurrentHealth(378.0f);
        stats->setMaxHealth(378.0f);
        stats->setCurrentMana(200.0f);
        stats->setMaxMana(200.0f);
        stats->setBaseAd(49.0f);
        stats->setRange(500.0f);
        stats->setMovementSpeed(335.0f);
        stats->setArmor(16.75f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(4.25f);
        stats->setMp5(6.5f);
    }

};

#endif