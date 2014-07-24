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

        stats->setCurrentHealth(430.0f);
        stats->setMaxHealth(430.0f);
        stats->setCurrentMana(260.0f);
        stats->setMaxMana(260.0f);
        stats->setBaseAd(50.0f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(350.0f);
        stats->setArmor(19.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(6.25f);
        stats->setMp5(6.75f);
    }

};

#endif