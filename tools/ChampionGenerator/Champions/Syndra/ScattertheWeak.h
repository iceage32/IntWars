#ifndef _SPELL_SCATTERTHEWEAK_H
#define _SPELL_SCATTERTHEWEAK_H

#include "Spell.h"

#define ID_SCATTERTHEWEAK 0x00000000

class ScattertheWeak : public Spell {
    private:
    float damage[5];

    public:
    ScattertheWeak(Champion* owner) : Spell(ID_SCATTERTHEWEAK, owner, 0.25f, 0) {
        cooldown[0] = 18f;
        cooldown[1] = 16.5f;
        cooldown[2] = 15f;
        cooldown[3] = 13.5f;
        cooldown[4] = 12f;

        cost[0] = 50;
        cost[1] = 50;
        cost[2] = 50;
        cost[3] = 50;
        cost[4] = 50;

        damage[0] = 70;
        damage[1] = 70;
        damage[2] = 70;
        damage[3] = 70;
        damage[4] = 70;
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