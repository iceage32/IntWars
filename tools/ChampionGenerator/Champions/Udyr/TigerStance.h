#ifndef _SPELL_TIGERSTANCE_H
#define _SPELL_TIGERSTANCE_H

#include "Spell.h"

#define ID_TIGERSTANCE 0x00000000

class TigerStance : public Spell {
    private:
    float damage[5];

    public:
    TigerStance(Champion* owner) : Spell(ID_TIGERSTANCE, owner, 0.25f, 0) {
        cooldown[0] = 6f;
        cooldown[1] = 6f;
        cooldown[2] = 6f;
        cooldown[3] = 6f;
        cooldown[4] = 6f;

        cost[0] = 47;
        cost[1] = 44;
        cost[2] = 41;
        cost[3] = 38;
        cost[4] = 35;

        damage[0] = 30;
        damage[1] = 30;
        damage[2] = 30;
        damage[3] = 30;
        damage[4] = 30;
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