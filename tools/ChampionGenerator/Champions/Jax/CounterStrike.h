#ifndef _SPELL_COUNTERSTRIKE_H
#define _SPELL_COUNTERSTRIKE_H

#include "Spell.h"

#define ID_COUNTERSTRIKE 0x00000000

class CounterStrike : public Spell {
    private:
    float damage[5];

    public:
    CounterStrike(Champion* owner) : Spell(ID_COUNTERSTRIKE, owner, 0.25f, 0) {
        cooldown[0] = 18f;
        cooldown[1] = 16f;
        cooldown[2] = 14f;
        cooldown[3] = 12f;
        cooldown[4] = 10f;

        cost[0] = 70;
        cost[1] = 75;
        cost[2] = 80;
        cost[3] = 85;
        cost[4] = 90;

        damage[0] = 50;
        damage[1] = 50;
        damage[2] = 50;
        damage[3] = 50;
        damage[4] = 50;
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