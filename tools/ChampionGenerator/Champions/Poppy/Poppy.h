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

        stats->setCurrentHealth(423.0f);
        stats->setMaxHealth(423.0f);
        stats->setCurrentMana(185.0f);
        stats->setMaxMana(185.0f);
        stats->setBaseAd(56.3f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(345.0f);
        stats->setArmor(22.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(7.45f);
        stats->setMp5(6.4f);
    }

};

#endif