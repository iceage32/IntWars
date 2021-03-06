#ifndef _SPELL_QUICKDRAW_H
#define _SPELL_QUICKDRAW_H

#include "Spell.h"

#define ID_QUICKDRAW 0x00000000

class Quickdraw : public Spell {
    private:
    float damage[5];

    public:
    Quickdraw(Champion* owner) : Spell(ID_QUICKDRAW, owner, 0.25f, 0) {
        cooldown[0] = 22.0f;
        cooldown[1] = 20.0f;
        cooldown[2] = 18.0f;
        cooldown[3] = 16.0f;
        cooldown[4] = 14.0f;

        cost[0] = 40;
        cost[1] = 40;
        cost[2] = 40;
        cost[3] = 40;
        cost[4] = 40;

        damage[0] = 30;
        damage[1] = 30;
        damage[2] = 30;
        damage[3] = 30;
        damage[4] = 30;
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