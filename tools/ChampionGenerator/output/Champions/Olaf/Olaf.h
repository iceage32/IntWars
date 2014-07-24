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

        stats->setCurrentHealth(441.0f);
        stats->setMaxHealth(441.0f);
        stats->setCurrentMana(190.0f);
        stats->setMaxMana(190.0f);
        stats->setBaseAd(54.1f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(350.0f);
        stats->setArmor(21.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.0f);
        stats->setMp5(6.5f);
    }

};

#endif