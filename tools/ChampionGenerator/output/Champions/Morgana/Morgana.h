#ifndef _CHAMPION_MORGANA_H
#define _CHAMPION_MORGANA_H

#include "Champion.h"
#include "DarkBinding.h"
#include "TormentedSoil.h"
#include "BlackShield.h"
#include "SoulShackles.h"

class Morgana : public Champion {

    public:
    Morgana(Map* map, uint32 id) : Champion("Morgana", map, id) {
        spells.push_back(new DarkBinding(this));
        spells.push_back(new TormentedSoil(this));
        spells.push_back(new BlackShield(this));
        spells.push_back(new SoulShackles(this));

        stats->setCurrentHealth(403.0f);
        stats->setMaxHealth(403.0f);
        stats->setCurrentMana(240.0f);
        stats->setMaxMana(240.0f);
        stats->setBaseAd(51.58f);
        stats->setRange(450.0f);
        stats->setMovementSpeed(335.0f);
        stats->setArmor(19.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(4.7f);
        stats->setMp5(6.8f);
    }

};

#endif