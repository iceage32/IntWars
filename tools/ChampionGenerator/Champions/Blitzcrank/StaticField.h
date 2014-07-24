#ifndef _SPELL_STATICFIELD_H
#define _SPELL_STATICFIELD_H

#include "Spell.h"

#define ID_STATICFIELD 0x00000000

class StaticField : public Spell {
    private:
    float damage[5];

    public:
    StaticField(Champion* owner) : Spell(ID_STATICFIELD, owner, 0.25f, 0) {
        cooldown[0] = 30.0f;
        cooldown[1] = 30.0f;
        cooldown[2] = 30.0f;
        cooldown[3] = 0.0f;
        cooldown[4] = 0.0f;

        cost[0] = 100;
        cost[1] = 100;
        cost[2] = 100;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 100;
        damage[1] = 100;
        damage[2] = 100;
        damage[3] = 100;
        damage[4] = 100;
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