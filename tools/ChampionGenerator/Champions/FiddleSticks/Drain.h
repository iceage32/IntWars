#ifndef _SPELL_DRAIN_H
#define _SPELL_DRAIN_H

#include "Spell.h"

#define ID_DRAIN 0x00000000

class Drain : public Spell {
    private:
    float damage[5];

    public:
    Drain(Champion* owner) : Spell(ID_DRAIN, owner, 0.25f, 0) {
        cooldown[0] = 10f;
        cooldown[1] = 9f;
        cooldown[2] = 8f;
        cooldown[3] = 7f;
        cooldown[4] = 6f;

        cost[0] = 80;
        cost[1] = 90;
        cost[2] = 100;
        cost[3] = 110;
        cost[4] = 120;

        damage[0] = 60;
        damage[1] = 60;
        damage[2] = 60;
        damage[3] = 60;
        damage[4] = 60;
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