#ifndef _CHAMPION_SHACO_H
#define _CHAMPION_SHACO_H

#include "Champion.h"
#include "Deceive.h"
#include "JackInTheBox.h"
#include "TwoShivPoison.h"
#include "Hallucinate.h"

class Shaco : public Champion {

    public:
    Shaco(Map* map, uint32 id) : Champion("Shaco", map, id) {
        spells.push_back(new Deceive(this));
        spells.push_back(new JackInTheBox(this));
        spells.push_back(new TwoShivPoison(this));
        spells.push_back(new Hallucinate(this));

        stats->setCurrentHealth(441.0f);
        stats->setMaxHealth(441.0f);
        stats->setCurrentMana(230.0f);
        stats->setMaxMana(230.0f);
        stats->setBaseAd(51.7f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(350.0f);
        stats->setArmor(19.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.45f);
        stats->setMp5(6.4f);
    }

};

#endif