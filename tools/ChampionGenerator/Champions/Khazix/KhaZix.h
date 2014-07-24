#ifndef _CHAMPION_KHAZIX_H
#define _CHAMPION_KHAZIX_H

#include "Champion.h"
#include "TasteTheirFear.h"
#include "VoidSpike.h"
#include "Leap.h"
#include "VoidAssault.h"

class KhaZix : public Champion {

    public:
    KhaZix(Map* map, uint32 id) : Champion("KhaZix", map, id) {
        spells.push_back(new TasteTheirFear(this));
        spells.push_back(new VoidSpike(this));
        spells.push_back(new Leap(this));
        spells.push_back(new VoidAssault(this));

        stats->setCurrentHealth(430f);
        stats->setMaxHealth(430f);
        stats->setCurrentMana(260f);
        stats->setMaxMana(260f);
        stats->setBaseAd(50f);
        stats->setRange(125f);
        stats->setMovementSpeed(350f);
        stats->setArmor(19f);
        stats->setMagicArmor(30f);
        stats->setHp5(6.25f);
        stats->setMp5(6.75f);
    }

};

#endif