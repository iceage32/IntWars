#ifndef _SPELL_APPREHEND_H
#define _SPELL_APPREHEND_H

#include "Spell.h"

#define ID_APPREHEND 0x00000000

class Apprehend : public Spell {
    private:
    float damage[5];

    public:
    Apprehend(Champion* owner) : Spell(ID_APPREHEND, owner, 0.25f, 0) {
        cooldown[0] = 24.0f;
        cooldown[1] = 21.0f;
        cooldown[2] = 18.0f;
        cooldown[3] = 15.0f;
        cooldown[4] = 12.0f;

        cost[0] = 45;
        cost[1] = 45;
        cost[2] = 45;
        cost[3] = 45;
        cost[4] = 45;

        damage[0] = 5;
        damage[1] = 5;
        damage[2] = 5;
        damage[3] = 5;
        damage[4] = 5;
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