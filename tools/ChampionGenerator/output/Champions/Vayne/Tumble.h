#ifndef _SPELL_TUMBLE_H
#define _SPELL_TUMBLE_H

#include "Spell.h"

#define ID_TUMBLE 0x00000000

class Tumble : public Spell {
    private:
    float damage[5];

    public:
    Tumble(Champion* owner) : Spell(ID_TUMBLE, owner, 0.25f, 0) {
        cooldown[0] = 6.0f;
        cooldown[1] = 5.0f;
        cooldown[2] = 4.0f;
        cooldown[3] = 3.0f;
        cooldown[4] = 2.0f;

        cost[0] = 30;
        cost[1] = 30;
        cost[2] = 30;
        cost[3] = 30;
        cost[4] = 30;

        damage[0] = 30;
        damage[1] = 30;
        damage[2] = 30;
        damage[3] = 30;
        damage[4] = 30;
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