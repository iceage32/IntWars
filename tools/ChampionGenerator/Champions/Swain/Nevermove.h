#ifndef _SPELL_NEVERMOVE_H
#define _SPELL_NEVERMOVE_H

#include "Spell.h"

#define ID_NEVERMOVE 0x00000000

class Nevermove : public Spell {
    private:
    float damage[5];

    public:
    Nevermove(Champion* owner) : Spell(ID_NEVERMOVE, owner, 0.25f, 0) {
        cooldown[0] = 18.0f;
        cooldown[1] = 16.0f;
        cooldown[2] = 14.0f;
        cooldown[3] = 12.0f;
        cooldown[4] = 10.0f;

        cost[0] = 80;
        cost[1] = 90;
        cost[2] = 100;
        cost[3] = 110;
        cost[4] = 120;

        damage[0] = 80;
        damage[1] = 80;
        damage[2] = 80;
        damage[3] = 80;
        damage[4] = 80;
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