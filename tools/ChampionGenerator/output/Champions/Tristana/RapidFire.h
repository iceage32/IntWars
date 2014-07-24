#ifndef _SPELL_RAPIDFIRE_H
#define _SPELL_RAPIDFIRE_H

#include "Spell.h"

#define ID_RAPIDFIRE 0x00000000

class RapidFire : public Spell {
    private:
    float damage[5];

    public:
    RapidFire(Champion* owner) : Spell(ID_RAPIDFIRE, owner, 0.25f, 0) {
        cooldown[0] = 20.0f;
        cooldown[1] = 20.0f;
        cooldown[2] = 20.0f;
        cooldown[3] = 20.0f;
        cooldown[4] = 20.0f;

        cost[0] = 0;
        cost[1] = 0;
        cost[2] = 0;
        cost[3] = 0;
        cost[4] = 0;

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