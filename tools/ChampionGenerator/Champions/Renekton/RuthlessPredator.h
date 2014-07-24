#ifndef _SPELL_RUTHLESSPREDATOR_H
#define _SPELL_RUTHLESSPREDATOR_H

#include "Spell.h"

#define ID_RUTHLESSPREDATOR 0x00000000

class RuthlessPredator : public Spell {
    private:
    float damage[5];

    public:
    RuthlessPredator(Champion* owner) : Spell(ID_RUTHLESSPREDATOR, owner, 0.25f, 0) {
        cooldown[0] = 13f;
        cooldown[1] = 12f;
        cooldown[2] = 11f;
        cooldown[3] = 10f;
        cooldown[4] = 9f;

        cost[0] = 0;
        cost[1] = 0;
        cost[2] = 0;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 225;
        damage[1] = 225;
        damage[2] = 225;
        damage[3] = 225;
        damage[4] = 225;
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