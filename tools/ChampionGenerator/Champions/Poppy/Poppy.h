#ifndef _CHAMPION_POPPY_H
#define _CHAMPION_POPPY_H

#include "Champion.h"
#include "DevastatingBlow.h"
#include "ParagonofDemacia.h"
#include "HeroicCharge.h"
#include "DiplomaticImmunity.h"

class Poppy : public Champion {

    public:
    Poppy(Map* map, uint32 id) : Champion("Poppy", map, id) {
        spells.push_back(new DevastatingBlow(this));
        spells.push_back(new ParagonofDemacia(this));
        spells.push_back(new HeroicCharge(this));
        spells.push_back(new DiplomaticImmunity(this));

        stats->setCurrentHealth(423f);
        stats->setMaxHealth(423f);
        stats->setCurrentMana(185f);
        stats->setMaxMana(185f);
        stats->setBaseAd(56.3f);
        stats->setRange(125f);
        stats->setMovementSpeed(345f);
        stats->setArmor(22f);
        stats->setMagicArmor(30f);
        stats->setHp5(7.45f);
        stats->setMp5(6.4f);
    }

};

#endif