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

        stats->setCurrentHealth(440f);
        stats->setMaxHealth(440f);
        stats->setCurrentMana(215f);
        stats->setMaxMana(215f);
        stats->setBaseAd(54f);
        stats->setRange(125f);
        stats->setMovementSpeed(345f);
        stats->setArmor(21f);
        stats->setMagicArmor(30f);
        stats->setHp5(7f);
        stats->setMp5(6f);
    }

};

#endif