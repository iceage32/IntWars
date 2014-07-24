#ifndef _SPELL_DOUBLEUP_H
#define _SPELL_DOUBLEUP_H

#include "Spell.h"

#define ID_DOUBLEUP 0x00000000

class DoubleUp : public Spell {
    private:
    float damage[5];

    public:
    DoubleUp(Champion* owner) : Spell(ID_DOUBLEUP, owner, 0.25f, 0) {
        cooldown[0] = 7f;
        cooldown[1] = 6f;
        cooldown[2] = 5f;
        cooldown[3] = 4f;
        cooldown[4] = 3f;

        cost[0] = 43;
        cost[1] = 46;
        cost[2] = 49;
        cost[3] = 52;
        cost[4] = 55;

        damage[0] = 0.85;
        damage[1] = 0.85;
        damage[2] = 0.85;
        damage[3] = 0.85;
        damage[4] = 0.85;
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