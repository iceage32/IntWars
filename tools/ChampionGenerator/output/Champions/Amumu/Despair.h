#ifndef _SPELL_DESPAIR_H
#define _SPELL_DESPAIR_H

#include "Spell.h"

#define ID_DESPAIR 0x00000000

class Despair : public Spell {
    private:
    float damage[5];

    public:
    Despair(Champion* owner) : Spell(ID_DESPAIR, owner, 0.25f, 0) {
        cooldown[0] = 1.0f;
        cooldown[1] = 1.0f;
        cooldown[2] = 1.0f;
        cooldown[3] = 1.0f;
        cooldown[4] = 1.0f;

        cost[0] = 8;
        cost[1] = 8;
        cost[2] = 8;
        cost[3] = 8;
        cost[4] = 8;

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