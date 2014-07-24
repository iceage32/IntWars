#ifndef _SPELL_EMPOWER_H
#define _SPELL_EMPOWER_H

#include "Spell.h"

#define ID_EMPOWER 0x00000000

class Empower : public Spell {
    private:
    float damage[5];

    public:
    Empower(Champion* owner) : Spell(ID_EMPOWER, owner, 0.25f, 0) {
        cooldown[0] = 7f;
        cooldown[1] = 6f;
        cooldown[2] = 5f;
        cooldown[3] = 4f;
        cooldown[4] = 3f;

        cost[0] = 30;
        cost[1] = 30;
        cost[2] = 30;
        cost[3] = 30;
        cost[4] = 30;

        damage[0] = 40;
        damage[1] = 40;
        damage[2] = 40;
        damage[3] = 40;
        damage[4] = 40;
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