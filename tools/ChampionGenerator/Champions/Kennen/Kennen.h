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

        stats->setCurrentHealth(403.0f);
        stats->setMaxHealth(403.0f);
        stats->setCurrentMana(200.0f);
        stats->setMaxMana(200.0f);
        stats->setBaseAd(47.0f);
        stats->setRange(550.0f);
        stats->setMovementSpeed(335.0f);
        stats->setArmor(18.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(4.5f);
        stats->setMp5(50.0f);
    }

};

#endif