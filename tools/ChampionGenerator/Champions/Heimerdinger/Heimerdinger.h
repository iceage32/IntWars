#ifndef _CHAMPION_HEIMERDINGER_H
#define _CHAMPION_HEIMERDINGER_H

#include "Champion.h"
#include "HGEvolutionTurret.h"
#include "HextechMicroRockets.h"
#include "CHElectronStormGrenade.h"
#include "UPGRADE.h"

class Heimerdinger : public Champion {

    public:
    Heimerdinger(Map* map, uint32 id) : Champion("Heimerdinger", map, id) {
        spells.push_back(new HGEvolutionTurret(this));
        spells.push_back(new HextechMicroRockets(this));
        spells.push_back(new CHElectronStormGrenade(this));
        spells.push_back(new UPGRADE(this));

        stats->setCurrentHealth(350f);
        stats->setMaxHealth(350f);
        stats->setCurrentMana(240f);
        stats->setMaxMana(240f);
        stats->setBaseAd(53f);
        stats->setRange(550f);
        stats->setMovementSpeed(340f);
        stats->setArmor(14f);
        stats->setMagicArmor(30f);
        stats->setHp5(0f);
        stats->setMp5(6f);
    }

};

#endif