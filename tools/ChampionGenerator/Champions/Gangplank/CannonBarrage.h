#ifndef _SPELL_CANNONBARRAGE_H
#define _SPELL_CANNONBARRAGE_H

#include "Spell.h"

#define ID_CANNONBARRAGE 0x00000000

class CannonBarrage : public Spell {
    private:
    float damage[5];

    public:
    CannonBarrage(Champion* owner) : Spell(ID_CANNONBARRAGE, owner, 0.25f, 0) {
        cooldown[0] = 120f;
        cooldown[1] = 115f;
        cooldown[2] = 110f;
        cooldown[3] = 0f;
        cooldown[4] = 0f;

        cost[0] = 100;
        cost[1] = 100;
        cost[2] = 100;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 75;
        damage[1] = 75;
        damage[2] = 75;
        damage[3] = 75;
        damage[4] = 75;
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