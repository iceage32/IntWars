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

        stats->setCurrentHealth(450.0f);
        stats->setMaxHealth(450.0f);
        stats->setCurrentMana(220.0f);
        stats->setMaxMana(220.0f);
        stats->setBaseAd(54.5f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(350.0f);
        stats->setArmor(19.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(5.5f);
        stats->setMp5(6.75f);
    }

};

#endif