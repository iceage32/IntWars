#ifndef _SPELL_SANGUINEPOOL_H
#define _SPELL_SANGUINEPOOL_H

#include "Spell.h"

#define ID_SANGUINEPOOL 0x00000000

class SanguinePool : public Spell {
    private:
    float damage[5];

    public:
    SanguinePool(Champion* owner) : Spell(ID_SANGUINEPOOL, owner, 0.25f, 0) {
        cooldown[0] = 26.0f;
        cooldown[1] = 23.0f;
        cooldown[2] = 20.0f;
        cooldown[3] = 17.0f;
        cooldown[4] = 14.0f;

        cost[0] = 0;
        cost[1] = 0;
        cost[2] = 0;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 26;
        damage[1] = 26;
        damage[2] = 26;
        damage[3] = 26;
        damage[4] = 26;
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