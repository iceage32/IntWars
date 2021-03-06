#ifndef _SPELL_DARKSPHERE_H
#define _SPELL_DARKSPHERE_H

#include "Spell.h"

#define ID_DARKSPHERE 0x00000000

class DarkSphere : public Spell {
    private:
    float damage[5];

    public:
    DarkSphere(Champion* owner) : Spell(ID_DARKSPHERE, owner, 0.25f, 0) {
        cooldown[0] = 4.0f;
        cooldown[1] = 4.0f;
        cooldown[2] = 4.0f;
        cooldown[3] = 4.0f;
        cooldown[4] = 4.0f;

        cost[0] = 40;
        cost[1] = 50;
        cost[2] = 60;
        cost[3] = 70;
        cost[4] = 80;

        damage[0] = 70;
        damage[1] = 70;
        damage[2] = 70;
        damage[3] = 70;
        damage[4] = 70;
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