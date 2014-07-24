#ifndef _CHAMPION_JARVANIV_H
#define _CHAMPION_JARVANIV_H

#include "Champion.h"
#include "DragonStrike.h"
#include "GoldenAegis.h"
#include "DemacianStandard.h"
#include "Cataclysm.h"

class JarvanIV : public Champion {

    public:
    JarvanIV(Map* map, uint32 id) : Champion("JarvanIV", map, id) {
        spells.push_back(new DragonStrike(this));
        spells.push_back(new GoldenAegis(this));
        spells.push_back(new DemacianStandard(this));
        spells.push_back(new Cataclysm(this));

        stats->setCurrentHealth(420.0f);
        stats->setMaxHealth(420.0f);
        stats->setCurrentMana(235.0f);
        stats->setMaxMana(235.0f);
        stats->setBaseAd(50.0f);
        stats->setRange(175.0f);
        stats->setMovementSpeed(340.0f);
        stats->setArmor(18.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.0f);
        stats->setMp5(6.0f);
    }

};

#endif