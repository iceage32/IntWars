#ifndef _SPELL_AMBUSH_H
#define _SPELL_AMBUSH_H

#include "Spell.h"

#define ID_AMBUSH 0x00000000

class Ambush : public Spell {
    private:
    float damage[5];

    public:
    Ambush(Champion* owner) : Spell(ID_AMBUSH, owner, 0.25f, 0) {
        cooldown[0] = 16.0f;
        cooldown[1] = 16.0f;
        cooldown[2] = 16.0f;
        cooldown[3] = 16.0f;
        cooldown[4] = 16.0f;

        cost[0] = 60;
        cost[1] = 60;
        cost[2] = 60;
        cost[3] = 60;
        cost[4] = 60;

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