#ifndef _SPELL_TIMEWARP_H
#define _SPELL_TIMEWARP_H

#include "Spell.h"

#define ID_TIMEWARP 0x00000000

class TimeWarp : public Spell {
    private:
    float damage[5];

    public:
    TimeWarp(Champion* owner) : Spell(ID_TIMEWARP, owner, 0.25f, 0) {
        cooldown[0] = 20.0f;
        cooldown[1] = 20.0f;
        cooldown[2] = 20.0f;
        cooldown[3] = 20.0f;
        cooldown[4] = 20.0f;

        cost[0] = 80;
        cost[1] = 80;
        cost[2] = 80;
        cost[3] = 80;
        cost[4] = 80;

        damage[0] = 2.5;
        damage[1] = 2.5;
        damage[2] = 2.5;
        damage[3] = 2.5;
        damage[4] = 2.5;
    }

    /**
     * create the projectile here, and notify it to the map/game
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