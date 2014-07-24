#ifndef _SPELL_RIGHTEOUSFURY_H
#define _SPELL_RIGHTEOUSFURY_H

#include "Spell.h"

#define ID_RIGHTEOUSFURY 0x00000000

class RighteousFury : public Spell {
    private:
    float damage[5];

    public:
    RighteousFury(Champion* owner) : Spell(ID_RIGHTEOUSFURY, owner, 0.25f, 0) {
        cooldown[0] = 16f;
        cooldown[1] = 16f;
        cooldown[2] = 16f;
        cooldown[3] = 16f;
        cooldown[4] = 16f;

        cost[0] = 45;
        cost[1] = 45;
        cost[2] = 45;
        cost[3] = 45;
        cost[4] = 45;

        damage[0] = 20;
        damage[1] = 20;
        damage[2] = 20;
        damage[3] = 20;
        damage[4] = 20;
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