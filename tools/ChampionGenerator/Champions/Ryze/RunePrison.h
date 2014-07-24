#ifndef _SPELL_RUNEPRISON_H
#define _SPELL_RUNEPRISON_H

#include "Spell.h"

#define ID_RUNEPRISON 0x00000000

class RunePrison : public Spell {
    private:
    float damage[5];

    public:
    RunePrison(Champion* owner) : Spell(ID_RUNEPRISON, owner, 0.25f, 0) {
        cooldown[0] = 0f;
        cooldown[1] = 0f;
        cooldown[2] = 0f;
        cooldown[3] = 0f;
        cooldown[4] = 0f;

        cost[0] = 60;
        cost[1] = 70;
        cost[2] = 80;
        cost[3] = 90;
        cost[4] = 100;

        damage[0] = 0.75;
        damage[1] = 0.75;
        damage[2] = 0.75;
        damage[3] = 0.75;
        damage[4] = 0.75;
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