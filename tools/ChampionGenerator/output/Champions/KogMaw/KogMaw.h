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

        stats->setCurrentHealth(440.0f);
        stats->setMaxHealth(440.0f);
        stats->setCurrentMana(255.0f);
        stats->setMaxMana(255.0f);
        stats->setBaseAd(46.0f);
        stats->setRange(500.0f);
        stats->setMovementSpeed(330.0f);
        stats->setArmor(14.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(5.0f);
        stats->setMp5(7.5f);
    }

};

#endif