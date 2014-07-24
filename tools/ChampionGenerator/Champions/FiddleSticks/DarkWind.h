#ifndef _SPELL_DARKWIND_H
#define _SPELL_DARKWIND_H

#include "Spell.h"

#define ID_DARKWIND 0x00000000

class DarkWind : public Spell {
    private:
    float damage[5];

    public:
    DarkWind(Champion* owner) : Spell(ID_DARKWIND, owner, 0.25f, 0) {
        cooldown[0] = 15.0f;
        cooldown[1] = 14.0f;
        cooldown[2] = 13.0f;
        cooldown[3] = 12.0f;
        cooldown[4] = 11.0f;

        cost[0] = 50;
        cost[1] = 70;
        cost[2] = 90;
        cost[3] = 110;
        cost[4] = 130;

        damage[0] = 5;
        damage[1] = 5;
        damage[2] = 5;
        damage[3] = 5;
        damage[4] = 5;
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