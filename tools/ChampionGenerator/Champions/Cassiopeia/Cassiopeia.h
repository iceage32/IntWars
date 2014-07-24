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

        stats->setCurrentHealth(380f);
        stats->setMaxHealth(380f);
        stats->setCurrentMana(250f);
        stats->setMaxMana(250f);
        stats->setBaseAd(47f);
        stats->setRange(550f);
        stats->setMovementSpeed(335f);
        stats->setArmor(15.5f);
        stats->setMagicArmor(30f);
        stats->setHp5(4.85f);
        stats->setMp5(7.1f);
    }

};

#endif