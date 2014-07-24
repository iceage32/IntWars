#ifndef _SPELL_DECREPIFY_H
#define _SPELL_DECREPIFY_H

#include "Spell.h"

#define ID_DECREPIFY 0x00000000

class Decrepify : public Spell {
    private:
    float damage[5];

    public:
    Decrepify(Champion* owner) : Spell(ID_DECREPIFY, owner, 0.25f, 0) {
        cooldown[0] = 8.0f;
        cooldown[1] = 8.0f;
        cooldown[2] = 8.0f;
        cooldown[3] = 8.0f;
        cooldown[4] = 8.0f;

        cost[0] = 60;
        cost[1] = 70;
        cost[2] = 80;
        cost[3] = 90;
        cost[4] = 100;

        damage[0] = 25;
        damage[1] = 25;
        damage[2] = 25;
        damage[3] = 25;
        damage[4] = 25;
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