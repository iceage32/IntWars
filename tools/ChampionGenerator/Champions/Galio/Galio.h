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

        stats->setCurrentHealth(435f);
        stats->setMaxHealth(435f);
        stats->setCurrentMana(235f);
        stats->setMaxMana(235f);
        stats->setBaseAd(56.3f);
        stats->setRange(125f);
        stats->setMovementSpeed(335f);
        stats->setArmor(21f);
        stats->setMagicArmor(30f);
        stats->setHp5(7.45f);
        stats->setMp5(7f);
    }

};

#endif