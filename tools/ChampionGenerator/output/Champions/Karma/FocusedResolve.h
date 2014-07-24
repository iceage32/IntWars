#ifndef _SPELL_FOCUSEDRESOLVE_H
#define _SPELL_FOCUSEDRESOLVE_H

#include "Spell.h"

#define ID_FOCUSEDRESOLVE 0x00000000

class FocusedResolve : public Spell {
    private:
    float damage[5];

    public:
    FocusedResolve(Champion* owner) : Spell(ID_FOCUSEDRESOLVE, owner, 0.25f, 0) {
        cooldown[0] = 16.0f;
        cooldown[1] = 15.0f;
        cooldown[2] = 14.0f;
        cooldown[3] = 13.0f;
        cooldown[4] = 12.0f;

        cost[0] = 70;
        cost[1] = 75;
        cost[2] = 80;
        cost[3] = 85;
        cost[4] = 90;

        damage[0] = 60;
        damage[1] = 60;
        damage[2] = 60;
        damage[3] = 60;
        damage[4] = 60;
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