#ifndef _CHAMPION_OLAF_H
#define _CHAMPION_OLAF_H

#include "Champion.h"
#include "Undertow.h"
#include "ViciousStrikes.h"
#include "RecklessSwing.h"
#include "Ragnarok.h"

class Olaf : public Champion {

    public:
    Olaf(Map* map, uint32 id) : Champion("Olaf", map, id) {
        spells.push_back(new Undertow(this));
        spells.push_back(new ViciousStrikes(this));
        spells.push_back(new RecklessSwing(this));
        spells.push_back(new Ragnarok(this));

        stats->setCurrentHealth(441f);
        stats->setMaxHealth(441f);
        stats->setCurrentMana(190f);
        stats->setMaxMana(190f);
        stats->setBaseAd(54.1f);
        stats->setRange(125f);
        stats->setMovementSpeed(350f);
        stats->setArmor(21f);
        stats->setMagicArmor(30f);
        stats->setHp5(7f);
        stats->setMp5(6.5f);
    }

};

#endif