#ifndef _SPELL_MONSOON_H
#define _SPELL_MONSOON_H

#include "Spell.h"

#define ID_MONSOON 0x00000000

class Monsoon : public Spell {
    private:
    float damage[5];

    public:
    Monsoon(Champion* owner) : Spell(ID_MONSOON, owner, 0.25f, 0) {
        cooldown[0] = 150f;
        cooldown[1] = 135f;
        cooldown[2] = 120f;
        cooldown[3] = 0f;
        cooldown[4] = 0f;

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