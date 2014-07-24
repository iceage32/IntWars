#ifndef _SPELL_ROCKETGRAB_H
#define _SPELL_ROCKETGRAB_H

#include "Spell.h"

#define ID_ROCKETGRAB 0x00000000

class RocketGrab : public Spell {
    private:
    float damage[5];

    public:
    RocketGrab(Champion* owner) : Spell(ID_ROCKETGRAB, owner, 0.25f, 0) {
        cooldown[0] = 20f;
        cooldown[1] = 19f;
        cooldown[2] = 18f;
        cooldown[3] = 17f;
        cooldown[4] = 16f;

        cost[0] = 100;
        cost[1] = 100;
        cost[2] = 100;
        cost[3] = 100;
        cost[4] = 100;

        damage[0] = 80;
        damage[1] = 80;
        damage[2] = 80;
        damage[3] = 80;
        damage[4] = 80;
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