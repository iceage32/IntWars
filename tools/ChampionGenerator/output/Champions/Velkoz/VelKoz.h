#ifndef _CHAMPION_VELKOZ_H
#define _CHAMPION_VELKOZ_H

#include "Champion.h"
#include "PlasmaFission.h"
#include "VoidRift.h"
#include "TectonicDisruption.h"
#include "LifeFormDisintegrationRay.h"

class VelKoz : public Champion {

    public:
    VelKoz(Map* map, uint32 id) : Champion("VelKoz", map, id) {
        spells.push_back(new PlasmaFission(this));
        spells.push_back(new VoidRift(this));
        spells.push_back(new TectonicDisruption(this));
        spells.push_back(new LifeFormDisintegrationRay(this));

        stats->setCurrentHealth(380.0f);
        stats->setMaxHealth(380.0f);
        stats->setCurrentMana(250.0f);
        stats->setMaxMana(250.0f);
        stats->setBaseAd(51.66f);
        stats->setRange(525.0f);
        stats->setMovementSpeed(340.0f);
        stats->setArmor(16.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(4.5f);
        stats->setMp5(7.0f);
    }

};

#endif