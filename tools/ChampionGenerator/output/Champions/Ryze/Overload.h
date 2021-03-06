#ifndef _SPELL_OVERLOAD_H
#define _SPELL_OVERLOAD_H

#include "Spell.h"

#define ID_OVERLOAD 0x00000000

class Overload : public Spell {
    private:
    float damage[5];

    public:
    Overload(Champion* owner) : Spell(ID_OVERLOAD, owner, 0.25f, 0) {
        cooldown[0] = 3.5f;
        cooldown[1] = 3.5f;
        cooldown[2] = 3.5f;
        cooldown[3] = 3.5f;
        cooldown[4] = 3.5f;

        cost[0] = 60;
        cost[1] = 60;
        cost[2] = 60;
        cost[3] = 60;
        cost[4] = 60;

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