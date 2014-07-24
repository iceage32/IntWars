#ifndef _CHAMPION_KENNEN_H
#define _CHAMPION_KENNEN_H

#include "Champion.h"
#include "ThunderingShuriken.h"
#include "ElectricalSurge.h"
#include "LightningRush.h"
#include "SlicingMaelstrom.h"

class Kennen : public Champion {

    public:
    Kennen(Map* map, uint32 id) : Champion("Kennen", map, id) {
        spells.push_back(new ThunderingShuriken(this));
        spells.push_back(new ElectricalSurge(this));
        spells.push_back(new LightningRush(this));
        spells.push_back(new SlicingMaelstrom(this));

        stats->setCurrentHealth(403f);
        stats->setMaxHealth(403f);
        stats->setCurrentMana(200f);
        stats->setMaxMana(200f);
        stats->setBaseAd(47f);
        stats->setRange(550f);
        stats->setMovementSpeed(335f);
        stats->setArmor(18f);
        stats->setMagicArmor(30f);
        stats->setHp5(4.5f);
        stats->setMp5(50f);
    }

};

#endif