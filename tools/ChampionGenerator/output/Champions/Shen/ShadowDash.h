#ifndef _SPELL_SHADOWDASH_H
#define _SPELL_SHADOWDASH_H

#include "Spell.h"

#define ID_SHADOWDASH 0x00000000

class ShadowDash : public Spell {
    private:
    float damage[5];

    public:
    ShadowDash(Champion* owner) : Spell(ID_SHADOWDASH, owner, 0.25f, 0) {
        cooldown[0] = 16.0f;
        cooldown[1] = 14.0f;
        cooldown[2] = 12.0f;
        cooldown[3] = 10.0f;
        cooldown[4] = 8.0f;

        cost[0] = 120;
        cost[1] = 120;
        cost[2] = 120;
        cost[3] = 120;
        cost[4] = 120;

        damage[0] = 1.5;
        damage[1] = 1.5;
        damage[2] = 1.5;
        damage[3] = 1.5;
        damage[4] = 1.5;
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