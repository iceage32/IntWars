#ifndef _SPELL_DAZZLE_H
#define _SPELL_DAZZLE_H

#include "Spell.h"

#define ID_DAZZLE 0x00000000

class Dazzle : public Spell {
    private:
    float damage[5];

    public:
    Dazzle(Champion* owner) : Spell(ID_DAZZLE, owner, 0.25f, 0) {
        cooldown[0] = 18f;
        cooldown[1] = 17f;
        cooldown[2] = 16f;
        cooldown[3] = 15f;
        cooldown[4] = 14f;

        cost[0] = 75;
        cost[1] = 75;
        cost[2] = 75;
        cost[3] = 75;
        cost[4] = 75;

        damage[0] = 40;
        damage[1] = 40;
        damage[2] = 40;
        damage[3] = 40;
        damage[4] = 40;
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