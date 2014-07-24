#ifndef _SPELL_ARCANESMASH_H
#define _SPELL_ARCANESMASH_H

#include "Spell.h"

#define ID_ARCANESMASH 0x00000000

class ArcaneSmash : public Spell {
    private:
    float damage[5];

    public:
    ArcaneSmash(Champion* owner) : Spell(ID_ARCANESMASH, owner, 0.25f, 0) {
        cooldown[0] = 6f;
        cooldown[1] = 6f;
        cooldown[2] = 6f;
        cooldown[3] = 6f;
        cooldown[4] = 6f;

        cost[0] = 45;
        cost[1] = 45;
        cost[2] = 45;
        cost[3] = 45;
        cost[4] = 45;

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