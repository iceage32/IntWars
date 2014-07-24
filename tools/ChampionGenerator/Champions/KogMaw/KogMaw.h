#ifndef _CHAMPION_KOGMAW_H
#define _CHAMPION_KOGMAW_H

#include "Champion.h"
#include "CausticSpittle.h"
#include "BioArcaneBarrage.h"
#include "VoidOoze.h"
#include "LivingArtillery.h"

class KogMaw : public Champion {

    public:
    KogMaw(Map* map, uint32 id) : Champion("KogMaw", map, id) {
        spells.push_back(new CausticSpittle(this));
        spells.push_back(new BioArcaneBarrage(this));
        spells.push_back(new VoidOoze(this));
        spells.push_back(new LivingArtillery(this));

        stats->setCurrentHealth(440f);
        stats->setMaxHealth(440f);
        stats->setCurrentMana(255f);
        stats->setMaxMana(255f);
        stats->setBaseAd(46f);
        stats->setRange(500f);
        stats->setMovementSpeed(330f);
        stats->setArmor(14f);
        stats->setMagicArmor(30f);
        stats->setHp5(5f);
        stats->setMp5(7.5f);
    }

};

#endif