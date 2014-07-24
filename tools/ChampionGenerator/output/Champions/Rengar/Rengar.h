#ifndef _CHAMPION_RENGAR_H
#define _CHAMPION_RENGAR_H

#include "Champion.h"
#include "Savagery.h"
#include "BattleRoar.h"
#include "BolaStrike.h"
#include "ThrilloftheHunt.h"

class Rengar : public Champion {

    public:
    Rengar(Map* map, uint32 id) : Champion("Rengar", map, id) {
        spells.push_back(new Savagery(this));
        spells.push_back(new BattleRoar(this));
        spells.push_back(new BolaStrike(this));
        spells.push_back(new ThrilloftheHunt(this));

        stats->setCurrentHealth(435.0f);
        stats->setMaxHealth(435.0f);
        stats->setCurrentMana(5.0f);
        stats->setMaxMana(5.0f);
        stats->setBaseAd(55.0f);
        stats->setRange(125.0f);
        stats->setMovementSpeed(345.0f);
        stats->setArmor(20.0f);
        stats->setMagicArmor(30.0f);
        stats->setHp5(3.6f);
        stats->setMp5(0.0f);
    }

};

#endif