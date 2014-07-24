#ifndef _CHAMPION_FIORA_H
#define _CHAMPION_FIORA_H

#include "Champion.h"
#include "Lunge.h"
#include "Riposte.h"
#include "BurstofSpeed.h"
#include "BladeWaltz.h"

class Fiora : public Champion {

    public:
    Fiora(Map* map, uint32 id) : Champion("Fiora", map, id) {
        spells.push_back(new Lunge(this));
        spells.push_back(new Riposte(this));
        spells.push_back(new BurstofSpeed(this));
        spells.push_back(new BladeWaltz(this));

        stats->setCurrentHealth(450f);
        stats->setMaxHealth(450f);
        stats->setCurrentMana(220f);
        stats->setMaxMana(220f);
        stats->setBaseAd(54.5f);
        stats->setRange(125f);
        stats->setMovementSpeed(350f);
        stats->setArmor(19f);
        stats->setMagicArmor(30f);
        stats->setHp5(5.5f);
        stats->setMp5(6.75f);
    }

};

#endif