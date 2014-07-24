#ifndef _SPELL_FLING_H
#define _SPELL_FLING_H

#include "Spell.h"

#define ID_FLING 0x00000000

class Fling : public Spell {
    private:
    float damage[5];

    public:
    Fling(Champion* owner) : Spell(ID_FLING, owner, 0.25f, 0) {
        cooldown[0] = 10f;
        cooldown[1] = 10f;
        cooldown[2] = 10f;
        cooldown[3] = 10f;
        cooldown[4] = 10f;

        cost[0] = 100;
        cost[1] = 110;
        cost[2] = 120;
        cost[3] = 130;
        cost[4] = 140;

        damage[0] = 80;
        damage[1] = 80;
        damage[2] = 80;
        damage[3] = 80;
        damage[4] = 80;
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