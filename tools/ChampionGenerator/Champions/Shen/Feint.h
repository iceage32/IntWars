#ifndef _SPELL_FEINT_H
#define _SPELL_FEINT_H

#include "Spell.h"

#define ID_FEINT 0x00000000

class Feint : public Spell {
    private:
    float damage[5];

    public:
    Feint(Champion* owner) : Spell(ID_FEINT, owner, 0.25f, 0) {
        cooldown[0] = 9f;
        cooldown[1] = 8f;
        cooldown[2] = 7f;
        cooldown[3] = 6f;
        cooldown[4] = 5f;

        cost[0] = 50;
        cost[1] = 50;
        cost[2] = 50;
        cost[3] = 50;
        cost[4] = 50;

        damage[0] = 60;
        damage[1] = 60;
        damage[2] = 60;
        damage[3] = 60;
        damage[4] = 60;
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