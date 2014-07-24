#ifndef _SPELL_SPEARSHOT_H
#define _SPELL_SPEARSHOT_H

#include "Spell.h"

#define ID_SPEARSHOT 0x00000000

class SpearShot : public Spell {
    private:
    float damage[5];

    public:
    SpearShot(Champion* owner) : Spell(ID_SPEARSHOT, owner, 0.25f, 0) {
        cooldown[0] = 4f;
        cooldown[1] = 4f;
        cooldown[2] = 4f;
        cooldown[3] = 4f;
        cooldown[4] = 4f;

        cost[0] = 45;
        cost[1] = 45;
        cost[2] = 45;
        cost[3] = 45;
        cost[4] = 45;

        damage[0] = 100;
        damage[1] = 100;
        damage[2] = 100;
        damage[3] = 100;
        damage[4] = 100;
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