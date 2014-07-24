#ifndef _SPELL_CONDEMN_H
#define _SPELL_CONDEMN_H

#include "Spell.h"

#define ID_CONDEMN 0x00000000

class Condemn : public Spell {
    private:
    float damage[5];

    public:
    Condemn(Champion* owner) : Spell(ID_CONDEMN, owner, 0.25f, 0) {
        cooldown[0] = 20f;
        cooldown[1] = 18f;
        cooldown[2] = 16f;
        cooldown[3] = 14f;
        cooldown[4] = 12f;

        cost[0] = 90;
        cost[1] = 90;
        cost[2] = 90;
        cost[3] = 90;
        cost[4] = 90;

        damage[0] = 45;
        damage[1] = 45;
        damage[2] = 45;
        damage[3] = 45;
        damage[4] = 45;
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