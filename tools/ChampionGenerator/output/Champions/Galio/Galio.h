#ifndef _CHAMPION_GALIO_H
#define _CHAMPION_GALIO_H

#include "Champion.h"
#include "ResoluteSmite.h"
#include "Bulwark.h"
#include "RighteousGust.h"
#include "IdolofDurand.h"

class Galio : public Champion {

    public:
    Galio(Map* map, uint32 id) : Champion("Galio", map, id) {
        spells.push_back(new ResoluteSmite(this));
        spells.push_back(new Bulwark(this));
        spells.push_back(new RighteousGust(this));
        spells.push_back(new IdolofDurand(this));

        stats->setCurrentHealth(435.0f);
        stats->setMaxHealth(435.0f);
        stats->setCurrentMana(235.0f);
        stats->setMaxMana(235.0f);
        stats->setBaseAd(56.3f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(335.0f);
        stats->setArmor(21.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.45f);
        stats->setMp5(7.0f);
    }

};

#endif