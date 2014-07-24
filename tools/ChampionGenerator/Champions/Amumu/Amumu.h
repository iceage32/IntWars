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

        stats->setCurrentHealth(472f);
        stats->setMaxHealth(472f);
        stats->setCurrentMana(220f);
        stats->setMaxMana(220f);
        stats->setBaseAd(47f);
        stats->setRange(125f);
        stats->setMovementSpeed(335f);
        stats->setArmor(22f);
        stats->setMagicArmor(30f);
        stats->setHp5(7.45f);
        stats->setMp5(6.5f);
    }

};

#endif