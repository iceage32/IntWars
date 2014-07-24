#ifndef _SPELL_SPINNINGSLASH_H
#define _SPELL_SPINNINGSLASH_H

#include "Spell.h"

#define ID_SPINNINGSLASH 0x00000000

class SpinningSlash : public Spell {
    private:
    float damage[5];

    public:
    SpinningSlash(Champion* owner) : Spell(ID_SPINNINGSLASH, owner, 0.25f, 0) {
        cooldown[0] = 13f;
        cooldown[1] = 12f;
        cooldown[2] = 11f;
        cooldown[3] = 10f;
        cooldown[4] = 9f;

        cost[0] = 0;
        cost[1] = 0;
        cost[2] = 0;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 70;
        damage[1] = 70;
        damage[2] = 70;
        damage[3] = 70;
        damage[4] = 70;
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