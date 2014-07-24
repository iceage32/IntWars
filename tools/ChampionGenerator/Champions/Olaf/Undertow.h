#ifndef _SPELL_UNDERTOW_H
#define _SPELL_UNDERTOW_H

#include "Spell.h"

#define ID_UNDERTOW 0x00000000

class Undertow : public Spell {
    private:
    float damage[5];

    public:
    Undertow(Champion* owner) : Spell(ID_UNDERTOW, owner, 0.25f, 0) {
        cooldown[0] = 8f;
        cooldown[1] = 8f;
        cooldown[2] = 8f;
        cooldown[3] = 8f;
        cooldown[4] = 8f;

        cost[0] = 60;
        cost[1] = 60;
        cost[2] = 60;
        cost[3] = 60;
        cost[4] = 60;

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