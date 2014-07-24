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

        stats->setCurrentHealth(355.0f);
        stats->setMaxHealth(355.0f);
        stats->setCurrentMana(250.0f);
        stats->setMaxMana(250.0f);
        stats->setBaseAd(48.3f);
        stats->setRange(525.0f);
        stats->setMovementSpeed(340.0f);
        stats->setArmor(16.25f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(4.5f);
        stats->setMp5(6.9f);
    }

};

#endif