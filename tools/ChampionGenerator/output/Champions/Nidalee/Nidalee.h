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

        stats->setCurrentHealth(390.0f);
        stats->setMaxHealth(390.0f);
        stats->setCurrentMana(220.0f);
        stats->setMaxMana(220.0f);
        stats->setBaseAd(49.0f);
        stats->setRange(525.0f);
        stats->setMovementSpeed(335.0f);
        stats->setArmor(17.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(5.0f);
        stats->setMp5(7.0f);
    }

};

#endif