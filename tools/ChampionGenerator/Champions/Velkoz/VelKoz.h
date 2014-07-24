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

        stats->setCurrentHealth(380f);
        stats->setMaxHealth(380f);
        stats->setCurrentMana(250f);
        stats->setMaxMana(250f);
        stats->setBaseAd(51.66f);
        stats->setRange(525f);
        stats->setMovementSpeed(340f);
        stats->setArmor(16f);
        stats->setMagicArmor(30f);
        stats->setHp5(4.5f);
        stats->setMp5(7f);
    }

};

#endif