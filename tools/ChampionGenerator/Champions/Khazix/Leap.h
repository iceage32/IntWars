#ifndef _SPELL_LEAP_H
#define _SPELL_LEAP_H

#include "Spell.h"

#define ID_LEAP 0x00000000

class Leap : public Spell {
    private:
    float damage[5];

    public:
    Leap(Champion* owner) : Spell(ID_LEAP, owner, 0.25f, 0) {
        cooldown[0] = 20f;
        cooldown[1] = 18f;
        cooldown[2] = 16f;
        cooldown[3] = 14f;
        cooldown[4] = 12f;

        cost[0] = 50;
        cost[1] = 50;
        cost[2] = 50;
        cost[3] = 50;
        cost[4] = 50;

        damage[0] = 65;
        damage[1] = 65;
        damage[2] = 65;
        damage[3] = 65;
        damage[4] = 65;
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