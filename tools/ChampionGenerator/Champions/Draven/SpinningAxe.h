#ifndef _SPELL_SPINNINGAXE_H
#define _SPELL_SPINNINGAXE_H

#include "Spell.h"

#define ID_SPINNINGAXE 0x00000000

class SpinningAxe : public Spell {
    private:
    float damage[5];

    public:
    SpinningAxe(Champion* owner) : Spell(ID_SPINNINGAXE, owner, 0.25f, 0) {
        cooldown[0] = 12f;
        cooldown[1] = 11f;
        cooldown[2] = 10f;
        cooldown[3] = 9f;
        cooldown[4] = 8f;

        cost[0] = 45;
        cost[1] = 45;
        cost[2] = 45;
        cost[3] = 45;
        cost[4] = 45;

        damage[0] = 100;
        damage[1] = 100;
        damage[2] = 100;
        damage[3] = 100;
        damage[4] = 100;
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