#ifndef _CHAMPION_RENEKTON_H
#define _CHAMPION_RENEKTON_H

#include "Champion.h"
#include "CulltheMeek.h"
#include "RuthlessPredator.h"
#include "SliceandDice.h"
#include "Dominus.h"

class Renekton : public Champion {

    public:
    Renekton(Map* map, uint32 id) : Champion("Renekton", map, id) {
        spells.push_back(new CulltheMeek(this));
        spells.push_back(new RuthlessPredator(this));
        spells.push_back(new SliceandDice(this));
        spells.push_back(new Dominus(this));

        stats->setCurrentHealth(426f);
        stats->setMaxHealth(426f);
        stats->setCurrentMana(100f);
        stats->setMaxMana(100f);
        stats->setBaseAd(53.12f);
        stats->setRange(125f);
        stats->setMovementSpeed(345f);
        stats->setArmor(19.2f);
        stats->setMagicArmor(30f);
        stats->setHp5(6.7f);
        stats->setMp5(0f);
    }

};

#endif