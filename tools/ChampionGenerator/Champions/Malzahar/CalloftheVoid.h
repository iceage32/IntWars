#ifndef _SPELL_CALLOFTHEVOID_H
#define _SPELL_CALLOFTHEVOID_H

#include "Spell.h"

#define ID_CALLOFTHEVOID 0x00000000

class CalloftheVoid : public Spell {
    private:
    float damage[5];

    public:
    CalloftheVoid(Champion* owner) : Spell(ID_CALLOFTHEVOID, owner, 0.25f, 0) {
        cooldown[0] = 9.0f;
        cooldown[1] = 9.0f;
        cooldown[2] = 9.0f;
        cooldown[3] = 9.0f;
        cooldown[4] = 9.0f;

        cost[0] = 80;
        cost[1] = 85;
        cost[2] = 90;
        cost[3] = 95;
        cost[4] = 100;

        damage[0] = 80;
        damage[1] = 80;
        damage[2] = 80;
        damage[3] = 80;
        damage[4] = 80;
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