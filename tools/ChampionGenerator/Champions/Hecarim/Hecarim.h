#ifndef _CHAMPION_HECARIM_H
#define _CHAMPION_HECARIM_H

#include "Champion.h"
#include "Rampage.h"
#include "SpiritofDread.h"
#include "DevastatingCharge.h"
#include "OnslaughtofShadows.h"

class Hecarim : public Champion {

    public:
    Hecarim(Map* map, uint32 id) : Champion("Hecarim", map, id) {
        spells.push_back(new Rampage(this));
        spells.push_back(new SpiritofDread(this));
        spells.push_back(new DevastatingCharge(this));
        spells.push_back(new OnslaughtofShadows(this));

        stats->setCurrentHealth(440f);
        stats->setMaxHealth(440f);
        stats->setCurrentMana(210f);
        stats->setMaxMana(210f);
        stats->setBaseAd(56f);
        stats->setRange(175f);
        stats->setMovementSpeed(345f);
        stats->setArmor(20f);
        stats->setMagicArmor(30f);
        stats->setHp5(8f);
        stats->setMp5(6.5f);
    }

};

#endif