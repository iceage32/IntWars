#ifndef _SPELL_BIOARCANEBARRAGE_H
#define _SPELL_BIOARCANEBARRAGE_H

#include "Spell.h"

#define ID_BIOARCANEBARRAGE 0x00000000

class BioArcaneBarrage : public Spell {
    private:
    float damage[5];

    public:
    BioArcaneBarrage(Champion* owner) : Spell(ID_BIOARCANEBARRAGE, owner, 0.25f, 0) {
        cooldown[0] = 17f;
        cooldown[1] = 17f;
        cooldown[2] = 17f;
        cooldown[3] = 17f;
        cooldown[4] = 17f;

        cost[0] = 0;
        cost[1] = 0;
        cost[2] = 0;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 130;
        damage[1] = 130;
        damage[2] = 130;
        damage[3] = 130;
        damage[4] = 130;
    }

    /**
     * TODO : create the projectile here, and notify it to the map/game
     */
    virtual bool cast(float x, float y, Unit* u = 0) {
        return Spell::cast(x, y, u);
    }

    /**
     * This is called when the spell is finished casting, and we're supposed to
     * create the projectile
     */
    virtual void finishCasting();

    /**
     * This will be called when spell projectile hits a unit
     */
    virtual void applyEffects(Target* t, Projectile* p = 0);


};

#endif