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

        stats->setCurrentHealth(390.0f);
        stats->setMaxHealth(390.0f);
        stats->setCurrentMana(255.0f);
        stats->setMaxMana(255.0f);
        stats->setBaseAd(47.0f);
        stats->setRange(650.0f);
        stats->setMovementSpeed(325.0f);
        stats->setArmor(17.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(4.75f);
        stats->setMp5(6.5f);
    }

};

#endif