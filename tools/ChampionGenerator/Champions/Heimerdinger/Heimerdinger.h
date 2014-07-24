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

        stats->setCurrentHealth(350.0f);
        stats->setMaxHealth(350.0f);
        stats->setCurrentMana(240.0f);
        stats->setMaxMana(240.0f);
        stats->setBaseAd(53.0f);
        stats->setRange(550.0f);
        stats->setMovementSpeed(340.0f);
        stats->setArmor(14.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(0.0f);
        stats->setMp5(6.0f);
    }

};

#endif