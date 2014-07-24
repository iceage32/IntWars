#ifndef _CHAMPION_ANIVIA_H
#define _CHAMPION_ANIVIA_H

#include "Champion.h"
#include "FlashFrost.h"
#include "Crystallize.h"
#include "Frostbite.h"
#include "GlacialStorm.h"

class Anivia : public Champion {

    public:
    Anivia(Map* map, uint32 id) : Champion("Anivia", map, id) {
        spells.push_back(new FlashFrost(this));
        spells.push_back(new Crystallize(this));
        spells.push_back(new Frostbite(this));
        spells.push_back(new GlacialStorm(this));

        stats->setCurrentHealth(350f);
        stats->setMaxHealth(350f);
        stats->setCurrentMana(257f);
        stats->setMaxMana(257f);
        stats->setBaseAd(48f);
        stats->setRange(600f);
        stats->setMovementSpeed(325f);
        stats->setArmor(14.5f);
        stats->setMagicArmor(30f);
        stats->setHp5(4.65f);
        stats->setMp5(7f);
    }

};

#endif