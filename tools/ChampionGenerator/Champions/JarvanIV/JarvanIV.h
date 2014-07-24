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

        stats->setCurrentHealth(420f);
        stats->setMaxHealth(420f);
        stats->setCurrentMana(235f);
        stats->setMaxMana(235f);
        stats->setBaseAd(50f);
        stats->setRange(175f);
        stats->setMovementSpeed(340f);
        stats->setArmor(18f);
        stats->setMagicArmor(30f);
        stats->setHp5(7f);
        stats->setMp5(6f);
    }

};

#endif