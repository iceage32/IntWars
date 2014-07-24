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

        stats->setCurrentHealth(403f);
        stats->setMaxHealth(403f);
        stats->setCurrentMana(240f);
        stats->setMaxMana(240f);
        stats->setBaseAd(51.58f);
        stats->setRange(450f);
        stats->setMovementSpeed(335f);
        stats->setArmor(19f);
        stats->setMagicArmor(30f);
        stats->setHp5(4.7f);
        stats->setMp5(6.8f);
    }

};

#endif