#ifndef _CHAMPION_CASSIOPEIA_H
#define _CHAMPION_CASSIOPEIA_H

#include "Champion.h"
#include "NoxiousBlast.h"
#include "Miasma.h"
#include "TwinFang.h"
#include "PetrifyingGaze.h"

class Cassiopeia : public Champion {

    public:
    Cassiopeia(Map* map, uint32 id) : Champion("Cassiopeia", map, id) {
        spells.push_back(new NoxiousBlast(this));
        spells.push_back(new Miasma(this));
        spells.push_back(new TwinFang(this));
        spells.push_back(new PetrifyingGaze(this));

        stats->setCurrentHealth(380.0f);
        stats->setMaxHealth(380.0f);
        stats->setCurrentMana(250.0f);
        stats->setMaxMana(250.0f);
        stats->setBaseAd(47.0f);
        stats->setRange(550.0f);
        stats->setMovementSpeed(335.0f);
        stats->setArmor(15.5f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(4.85f);
        stats->setMp5(7.1f);
    }

};

#endif