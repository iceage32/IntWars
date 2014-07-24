#ifndef _CHAMPION_ELISE_H
#define _CHAMPION_ELISE_H

#include "Champion.h"
#include "NeurotoxinVenomousBite.h"
#include "VolatileSpiderlingSkitteringFrenzy.h"
#include "CocoonRappel.h"
#include "SpiderForm.h"

class Elise : public Champion {

    public:
    Elise(Map* map, uint32 id) : Champion("Elise", map, id) {
        spells.push_back(new NeurotoxinVenomousBite(this));
        spells.push_back(new VolatileSpiderlingSkitteringFrenzy(this));
        spells.push_back(new CocoonRappel(this));
        spells.push_back(new SpiderForm(this));

        stats->setCurrentHealth(395f);
        stats->setMaxHealth(395f);
        stats->setCurrentMana(240f);
        stats->setMaxMana(240f);
        stats->setBaseAd(47.5f);
        stats->setRange(550f);
        stats->setMovementSpeed(335f);
        stats->setArmor(16.5f);
        stats->setMagicArmor(30f);
        stats->setHp5(4.7f);
        stats->setMp5(6.8f);
    }

};

#endif