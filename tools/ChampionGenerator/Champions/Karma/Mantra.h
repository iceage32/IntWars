#ifndef _SPELL_MANTRA_H
#define _SPELL_MANTRA_H

#include "Spell.h"

#define ID_MANTRA 0x00000000

class Mantra : public Spell {
    private:
    float damage[5];

    public:
    Mantra(Champion* owner) : Spell(ID_MANTRA, owner, 0.25f, 0) {
        cooldown[0] = 45f;
        cooldown[1] = 42f;
        cooldown[2] = 39f;
        cooldown[3] = 36f;
        cooldown[4] = 0f;

        cost[0] = 0;
        cost[1] = 0;
        cost[2] = 0;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 25;
        damage[1] = 25;
        damage[2] = 25;
        damage[3] = 25;
        damage[4] = 25;
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