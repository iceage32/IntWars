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

        stats->setCurrentHealth(435f);
        stats->setMaxHealth(435f);
        stats->setCurrentMana(5f);
        stats->setMaxMana(5f);
        stats->setBaseAd(55f);
        stats->setRange(125f);
        stats->setMovementSpeed(345f);
        stats->setArmor(20f);
        stats->setMagicArmor(30f);
        stats->setHp5(3.6f);
        stats->setMp5(0f);
    }

};

#endif