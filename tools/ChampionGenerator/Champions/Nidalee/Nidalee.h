#ifndef _CHAMPION_NIDALEE_H
#define _CHAMPION_NIDALEE_H

#include "Champion.h"
#include "JavelinTossTakedown.h"
#include "BushwhackPounce.h"
#include "PrimalSurgeSwipe.h"
#include "AspectOfTheCougar.h"

class Nidalee : public Champion {

    public:
    Nidalee(Map* map, uint32 id) : Champion("Nidalee", map, id) {
        spells.push_back(new JavelinTossTakedown(this));
        spells.push_back(new BushwhackPounce(this));
        spells.push_back(new PrimalSurgeSwipe(this));
        spells.push_back(new AspectOfTheCougar(this));

        stats->setCurrentHealth(390f);
        stats->setMaxHealth(390f);
        stats->setCurrentMana(220f);
        stats->setMaxMana(220f);
        stats->setBaseAd(49f);
        stats->setRange(525f);
        stats->setMovementSpeed(335f);
        stats->setArmor(17f);
        stats->setMagicArmor(30f);
        stats->setHp5(5f);
        stats->setMp5(7f);
    }

};

#endif