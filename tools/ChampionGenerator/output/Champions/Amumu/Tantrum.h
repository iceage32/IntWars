#ifndef _SPELL_TANTRUM_H
#define _SPELL_TANTRUM_H

#include "Spell.h"

#define ID_TANTRUM 0x00000000

class Tantrum : public Spell {
    private:
    float damage[5];

    public:
    Tantrum(Champion* owner) : Spell(ID_TANTRUM, owner, 0.25f, 0) {
        cooldown[0] = 10.0f;
        cooldown[1] = 9.0f;
        cooldown[2] = 8.0f;
        cooldown[3] = 7.0f;
        cooldown[4] = 6.0f;

        cost[0] = 35;
        cost[1] = 35;
        cost[2] = 35;
        cost[3] = 35;
        cost[4] = 35;

        damage[0] = 2;
        damage[1] = 2;
        damage[2] = 2;
        damage[3] = 2;
        damage[4] = 2;
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