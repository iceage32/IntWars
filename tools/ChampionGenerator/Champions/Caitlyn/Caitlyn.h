#ifndef _CHAMPION_CAITLYN_H
#define _CHAMPION_CAITLYN_H

#include "Champion.h"
#include "PiltoverPeacemaker.h"
#include "YordleSnapTrap.h"
#include "CaliberNet.h"
#include "AceintheHole.h"

class Caitlyn : public Champion {

    public:
    Caitlyn(Map* map, uint32 id) : Champion("Caitlyn", map, id) {
        spells.push_back(new PiltoverPeacemaker(this));
        spells.push_back(new YordleSnapTrap(this));
        spells.push_back(new CaliberNet(this));
        spells.push_back(new AceintheHole(this));

        stats->setCurrentHealth(390f);
        stats->setMaxHealth(390f);
        stats->setCurrentMana(255f);
        stats->setMaxMana(255f);
        stats->setBaseAd(47f);
        stats->setRange(650f);
        stats->setMovementSpeed(325f);
        stats->setArmor(17f);
        stats->setMagicArmor(30f);
        stats->setHp5(4.75f);
        stats->setMp5(6.5f);
    }

};

#endif