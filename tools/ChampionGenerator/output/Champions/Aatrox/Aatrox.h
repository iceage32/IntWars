#ifndef _CHAMPION_AATROX_H
#define _CHAMPION_AATROX_H

#include "Champion.h"
#include "DarkFlight.h"
#include "BloodThirstBloodPrice.h"
#include "BladesofTorment.h"
#include "Massacre.h"

class Aatrox : public Champion {

    public:
    Aatrox(Map* map, uint32 id) : Champion("Aatrox", map, id) {
        spells.push_back(new DarkFlight(this));
        spells.push_back(new BloodThirstBloodPrice(this));
        spells.push_back(new BladesofTorment(this));
        spells.push_back(new Massacre(this));

        stats->setCurrentHealth(395.0f);
        stats->setMaxHealth(395.0f);
        stats->setCurrentMana(30.0f);
        stats->setMaxMana(30.0f);
        stats->setBaseAd(55.0f);
        stats->setRange(150.0f);
        stats->setMovementSpeed(345.0f);
        stats->setArmor(18.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(5.75f);
        stats->setMp5(0.0f);
    }

};

#endif