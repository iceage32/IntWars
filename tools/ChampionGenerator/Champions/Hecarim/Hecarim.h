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

        stats->setCurrentHealth(440.0f);
        stats->setMaxHealth(440.0f);
        stats->setCurrentMana(210.0f);
        stats->setMaxMana(210.0f);
        stats->setBaseAd(56.0f);
        stats->setRange(175.0f);
        stats->setMovementSpeed(345.0f);
        stats->setArmor(20.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(8.0f);
        stats->setMp5(6.5f);
    }

};

#endif