#ifndef _SPELL_MOCKINGSHOUT_H
#define _SPELL_MOCKINGSHOUT_H

#include "Spell.h"

#define ID_MOCKINGSHOUT 0x00000000

class MockingShout : public Spell {
    private:
    float damage[5];

    public:
    MockingShout(Champion* owner) : Spell(ID_MOCKINGSHOUT, owner, 0.25f, 0) {
        cooldown[0] = 14f;
        cooldown[1] = 14f;
        cooldown[2] = 14f;
        cooldown[3] = 14f;
        cooldown[4] = 14f;

        cost[0] = 0;
        cost[1] = 0;
        cost[2] = 0;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 20;
        damage[1] = 20;
        damage[2] = 20;
        damage[3] = 20;
        damage[4] = 20;
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