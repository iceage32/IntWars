#ifndef _SPELL_FRENZY_H
#define _SPELL_FRENZY_H

#include "Spell.h"

#define ID_FRENZY 0x00000000

class Frenzy : public Spell {
    private:
    float damage[5];

    public:
    Frenzy(Champion* owner) : Spell(ID_FRENZY, owner, 0.25f, 0) {
        cooldown[0] = 18.0f;
        cooldown[1] = 18.0f;
        cooldown[2] = 18.0f;
        cooldown[3] = 18.0f;
        cooldown[4] = 18.0f;

        cost[0] = 35;
        cost[1] = 35;
        cost[2] = 35;
        cost[3] = 35;
        cost[4] = 35;

        damage[0] = 8;
        damage[1] = 8;
        damage[2] = 8;
        damage[3] = 8;
        damage[4] = 8;
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