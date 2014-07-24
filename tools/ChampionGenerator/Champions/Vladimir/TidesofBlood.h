#ifndef _SPELL_TIDESOFBLOOD_H
#define _SPELL_TIDESOFBLOOD_H

#include "Spell.h"

#define ID_TIDESOFBLOOD 0x00000000

class TidesofBlood : public Spell {
    private:
    float damage[5];

    public:
    TidesofBlood(Champion* owner) : Spell(ID_TIDESOFBLOOD, owner, 0.25f, 0) {
        cooldown[0] = 4.5f;
        cooldown[1] = 4.5f;
        cooldown[2] = 4.5f;
        cooldown[3] = 4.5f;
        cooldown[4] = 4.5f;

        cost[0] = 0;
        cost[1] = 0;
        cost[2] = 0;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 60;
        damage[1] = 60;
        damage[2] = 60;
        damage[3] = 60;
        damage[4] = 60;
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