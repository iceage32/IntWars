#ifndef _SPELL_CRYSTALLIZE_H
#define _SPELL_CRYSTALLIZE_H

#include "Spell.h"

#define ID_CRYSTALLIZE 0x00000000

class Crystallize : public Spell {
    private:
    float damage[5];

    public:
    Crystallize(Champion* owner) : Spell(ID_CRYSTALLIZE, owner, 0.25f, 0) {
        cooldown[0] = 25f;
        cooldown[1] = 25f;
        cooldown[2] = 25f;
        cooldown[3] = 25f;
        cooldown[4] = 25f;

        cost[0] = 70;
        cost[1] = 70;
        cost[2] = 70;
        cost[3] = 70;
        cost[4] = 70;

        damage[0] = 5;
        damage[1] = 5;
        damage[2] = 5;
        damage[3] = 5;
        damage[4] = 5;
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