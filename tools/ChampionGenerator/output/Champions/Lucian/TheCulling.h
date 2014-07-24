#ifndef _SPELL_THECULLING_H
#define _SPELL_THECULLING_H

#include "Spell.h"

#define ID_THECULLING 0x00000000

class TheCulling : public Spell {
    private:
    float damage[5];

    public:
    TheCulling(Champion* owner) : Spell(ID_THECULLING, owner, 0.25f, 0) {
        cooldown[0] = 100.0f;
        cooldown[1] = 75.0f;
        cooldown[2] = 50.0f;
        cooldown[3] = 0.0f;
        cooldown[4] = 0.0f;

        cost[0] = 100;
        cost[1] = 100;
        cost[2] = 100;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 3;
        damage[1] = 3;
        damage[2] = 3;
        damage[3] = 3;
        damage[4] = 3;
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