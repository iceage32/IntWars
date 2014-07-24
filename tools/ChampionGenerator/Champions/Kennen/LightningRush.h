#ifndef _SPELL_LIGHTNINGRUSH_H
#define _SPELL_LIGHTNINGRUSH_H

#include "Spell.h"

#define ID_LIGHTNINGRUSH 0x00000000

class LightningRush : public Spell {
    private:
    float damage[5];

    public:
    LightningRush(Champion* owner) : Spell(ID_LIGHTNINGRUSH, owner, 0.25f, 0) {
        cooldown[0] = 10f;
        cooldown[1] = 9f;
        cooldown[2] = 8f;
        cooldown[3] = 7f;
        cooldown[4] = 6f;

        cost[0] = 100;
        cost[1] = 95;
        cost[2] = 90;
        cost[3] = 85;
        cost[4] = 80;

        damage[0] = 85;
        damage[1] = 85;
        damage[2] = 85;
        damage[3] = 85;
        damage[4] = 85;
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