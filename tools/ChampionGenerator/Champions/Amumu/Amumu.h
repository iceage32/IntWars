#ifndef _CHAMPION_AMUMU_H
#define _CHAMPION_AMUMU_H

#include "Champion.h"
#include "BandageToss.h"
#include "Despair.h"
#include "Tantrum.h"
#include "CurseoftheSadMummy.h"

class Amumu : public Champion {

    public:
    Amumu(Map* map, uint32 id) : Champion("Amumu", map, id) {
        spells.push_back(new BandageToss(this));
        spells.push_back(new Despair(this));
        spells.push_back(new Tantrum(this));
        spells.push_back(new CurseoftheSadMummy(this));

        stats->setCurrentHealth(472.0f);
        stats->setMaxHealth(472.0f);
        stats->setCurrentMana(220.0f);
        stats->setMaxMana(220.0f);
        stats->setBaseAd(47.0f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(335.0f);
        stats->setArmor(22.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.45f);
        stats->setMp5(6.5f);
    }

};

#endif