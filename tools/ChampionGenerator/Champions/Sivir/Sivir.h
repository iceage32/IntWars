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

        stats->setCurrentHealth(378f);
        stats->setMaxHealth(378f);
        stats->setCurrentMana(200f);
        stats->setMaxMana(200f);
        stats->setBaseAd(49f);
        stats->setRange(500f);
        stats->setMovementSpeed(335f);
        stats->setArmor(16.75f);
        stats->setMagicArmor(30f);
        stats->setHp5(4.25f);
        stats->setMp5(6.5f);
    }

};

#endif