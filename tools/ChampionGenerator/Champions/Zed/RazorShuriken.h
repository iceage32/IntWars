#ifndef _SPELL_RAZORSHURIKEN_H
#define _SPELL_RAZORSHURIKEN_H

#include "Spell.h"

#define ID_RAZORSHURIKEN 0x00000000

class RazorShuriken : public Spell {
    private:
    float damage[5];

    public:
    RazorShuriken(Champion* owner) : Spell(ID_RAZORSHURIKEN, owner, 0.25f, 0) {
        cooldown[0] = 6f;
        cooldown[1] = 6f;
        cooldown[2] = 6f;
        cooldown[3] = 6f;
        cooldown[4] = 6f;

        cost[0] = 75;
        cost[1] = 70;
        cost[2] = 65;
        cost[3] = 60;
        cost[4] = 55;

        damage[0] = 75;
        damage[1] = 75;
        damage[2] = 75;
        damage[3] = 75;
        damage[4] = 75;
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