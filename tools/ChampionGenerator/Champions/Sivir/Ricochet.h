#ifndef _SPELL_RICOCHET_H
#define _SPELL_RICOCHET_H

#include "Spell.h"

#define ID_RICOCHET 0x00000000

class Ricochet : public Spell {
    private:
    float damage[5];

    public:
    Ricochet(Champion* owner) : Spell(ID_RICOCHET, owner, 0.25f, 0) {
        cooldown[0] = 9f;
        cooldown[1] = 8f;
        cooldown[2] = 7f;
        cooldown[3] = 6f;
        cooldown[4] = 5f;

        cost[0] = 60;
        cost[1] = 60;
        cost[2] = 60;
        cost[3] = 60;
        cost[4] = 60;

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