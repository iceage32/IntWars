#ifndef _CHAMPION_NOCTURNE_H
#define _CHAMPION_NOCTURNE_H

#include "Champion.h"
#include "Duskbringer.h"
#include "ShroudofDarkness.h"
#include "UnspeakableHorror.h"
#include "Paranoia.h"

class Nocturne : public Champion {

    public:
    Nocturne(Map* map, uint32 id) : Champion("Nocturne", map, id) {
        spells.push_back(new Duskbringer(this));
        spells.push_back(new ShroudofDarkness(this));
        spells.push_back(new UnspeakableHorror(this));
        spells.push_back(new Paranoia(this));

        stats->setCurrentHealth(440.0f);
        stats->setMaxHealth(440.0f);
        stats->setCurrentMana(215.0f);
        stats->setMaxMana(215.0f);
        stats->setBaseAd(54.0f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(345.0f);
        stats->setArmor(21.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.0f);
        stats->setMp5(6.0f);
    }

};

#endif