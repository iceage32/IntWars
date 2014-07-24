#ifndef _CHAMPION_QUINN_H
#define _CHAMPION_QUINN_H

#include "Champion.h"
#include "BlindingAssault.h"
#include "HeightenedSenses.h"
#include "Vault.h"
#include "TagTeam.h"

class Quinn : public Champion {

    public:
    Quinn(Map* map, uint32 id) : Champion("Quinn", map, id) {
        spells.push_back(new BlindingAssault(this));
        spells.push_back(new HeightenedSenses(this));
        spells.push_back(new Vault(this));
        spells.push_back(new TagTeam(this));

        stats->setCurrentHealth(390f);
        stats->setMaxHealth(390f);
        stats->setCurrentMana(210f);
        stats->setMaxMana(210f);
        stats->setBaseAd(48f);
        stats->setRange(525f);
        stats->setMovementSpeed(335f);
        stats->setArmor(17.5f);
        stats->setMagicArmor(30f);
        stats->setHp5(4.5f);
        stats->setMp5(6.3f);
    }

};

#endif