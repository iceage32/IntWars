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

        stats->setCurrentHealth(395f);
        stats->setMaxHealth(395f);
        stats->setCurrentMana(30f);
        stats->setMaxMana(30f);
        stats->setBaseAd(55f);
        stats->setRange(150f);
        stats->setMovementSpeed(345f);
        stats->setArmor(18f);
        stats->setMagicArmor(30f);
        stats->setHp5(5.75f);
        stats->setMp5(0f);
    }

};

#endif