#ifndef _CHAMPION_LEBLANC_H
#define _CHAMPION_LEBLANC_H

#include "Champion.h"
#include "SigilofMalice.h"
#include "Distortion.h"
#include "EtherealChains.h"
#include "Mimic.h"

class LeBlanc : public Champion {

    public:
    LeBlanc(Map* map, uint32 id) : Champion("LeBlanc", map, id) {
        spells.push_back(new SigilofMalice(this));
        spells.push_back(new Distortion(this));
        spells.push_back(new EtherealChains(this));
        spells.push_back(new Mimic(this));

        stats->setCurrentHealth(390.0f);
        stats->setMaxHealth(390.0f);
        stats->setCurrentMana(250.0f);
        stats->setMaxMana(250.0f);
        stats->setBaseAd(51.0f);
        stats->setRange(525.0f);
        stats->setMovementSpeed(335.0f);
        stats->setArmor(16.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(6.5f);
        stats->setMp5(6.9f);
    }

};

#endif