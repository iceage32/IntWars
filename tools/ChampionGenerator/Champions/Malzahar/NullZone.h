#ifndef _SPELL_NULLZONE_H
#define _SPELL_NULLZONE_H

#include "Spell.h"

#define ID_NULLZONE 0x00000000

class NullZone : public Spell {
    private:
    float damage[5];

    public:
    NullZone(Champion* owner) : Spell(ID_NULLZONE, owner, 0.25f, 0) {
        cooldown[0] = 14.0f;
        cooldown[1] = 14.0f;
        cooldown[2] = 14.0f;
        cooldown[3] = 14.0f;
        cooldown[4] = 14.0f;

        cost[0] = 90;
        cost[1] = 95;
        cost[2] = 100;
        cost[3] = 105;
        cost[4] = 110;

        damage[0] = 4;
        damage[1] = 4;
        damage[2] = 4;
        damage[3] = 4;
        damage[4] = 4;
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