#ifndef _SPELL_STRANGLETHORNS_H
#define _SPELL_STRANGLETHORNS_H

#include "Spell.h"

#define ID_STRANGLETHORNS 0x00000000

class Stranglethorns : public Spell {
    private:
    float damage[5];

    public:
    Stranglethorns(Champion* owner) : Spell(ID_STRANGLETHORNS, owner, 0.25f, 0) {
        cooldown[0] = 130.0f;
        cooldown[1] = 120.0f;
        cooldown[2] = 110.0f;
        cooldown[3] = 0.0f;
        cooldown[4] = 0.0f;

        cost[0] = 100;
        cost[1] = 120;
        cost[2] = 140;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 125;
        damage[1] = 125;
        damage[2] = 125;
        damage[3] = 125;
        damage[4] = 125;
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