#ifndef _CHAMPION_VEIGAR_H
#define _CHAMPION_VEIGAR_H

#include "Champion.h"
#include "BalefulStrike.h"
#include "DarkMatter.h"
#include "EventHorizon.h"
#include "PrimordialBurst.h"

class Veigar : public Champion {

    public:
    Veigar(Map* map, uint32 id) : Champion("Veigar", map, id) {
        spells.push_back(new BalefulStrike(this));
        spells.push_back(new DarkMatter(this));
        spells.push_back(new EventHorizon(this));
        spells.push_back(new PrimordialBurst(this));

        stats->setCurrentHealth(355f);
        stats->setMaxHealth(355f);
        stats->setCurrentMana(250f);
        stats->setMaxMana(250f);
        stats->setBaseAd(48.3f);
        stats->setRange(525f);
        stats->setMovementSpeed(340f);
        stats->setArmor(16.25f);
        stats->setMagicArmor(30f);
        stats->setHp5(4.5f);
        stats->setMp5(6.9f);
    }

};

#endif