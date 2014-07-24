#ifndef _SPELL_POISONTRAIL_H
#define _SPELL_POISONTRAIL_H

#include "Spell.h"

#define ID_POISONTRAIL 0x00000000

class PoisonTrail : public Spell {
    private:
    float damage[5];

    public:
    PoisonTrail(Champion* owner) : Spell(ID_POISONTRAIL, owner, 0.25f, 0) {
        cooldown[0] = 0.0f;
        cooldown[1] = 0.0f;
        cooldown[2] = 0.0f;
        cooldown[3] = 0.0f;
        cooldown[4] = 0.0f;

        cost[0] = 13;
        cost[1] = 13;
        cost[2] = 13;
        cost[3] = 13;
        cost[4] = 13;

        damage[0] = 22;
        damage[1] = 22;
        damage[2] = 22;
        damage[3] = 22;
        damage[4] = 22;
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