#ifndef _SPELL_THREETALONSTRIKE_H
#define _SPELL_THREETALONSTRIKE_H

#include "Spell.h"

#define ID_THREETALONSTRIKE 0x00000000

class ThreeTalonStrike : public Spell {
    private:
    float damage[5];

    public:
    ThreeTalonStrike(Champion* owner) : Spell(ID_THREETALONSTRIKE, owner, 0.25f, 0) {
        cooldown[0] = 9f;
        cooldown[1] = 8f;
        cooldown[2] = 7f;
        cooldown[3] = 6f;
        cooldown[4] = 5f;

        cost[0] = 30;
        cost[1] = 30;
        cost[2] = 30;
        cost[3] = 30;
        cost[4] = 30;

        damage[0] = 15;
        damage[1] = 15;
        damage[2] = 15;
        damage[3] = 15;
        damage[4] = 15;
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