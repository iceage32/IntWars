#ifndef _SPELL_VOLLEY_H
#define _SPELL_VOLLEY_H

#include "Spell.h"

#define ID_VOLLEY 0x00000000

class Volley : public Spell {
    private:
    float damage[5];

    public:
    Volley(Champion* owner) : Spell(ID_VOLLEY, owner, 0.25f, 0) {
        cooldown[0] = 16.0f;
        cooldown[1] = 13.0f;
        cooldown[2] = 10.0f;
        cooldown[3] = 7.0f;
        cooldown[4] = 4.0f;

        cost[0] = 60;
        cost[1] = 60;
        cost[2] = 60;
        cost[3] = 60;
        cost[4] = 60;

        damage[0] = 16;
        damage[1] = 16;
        damage[2] = 16;
        damage[3] = 16;
        damage[4] = 16;
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