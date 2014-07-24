#ifndef _SPELL_UNBREAKABLE_H
#define _SPELL_UNBREAKABLE_H

#include "Spell.h"

#define ID_UNBREAKABLE 0x00000000

class Unbreakable : public Spell {
    private:
    float damage[5];

    public:
    Unbreakable(Champion* owner) : Spell(ID_UNBREAKABLE, owner, 0.25f, 0) {
        cooldown[0] = 18f;
        cooldown[1] = 16f;
        cooldown[2] = 14f;
        cooldown[3] = 12f;
        cooldown[4] = 10f;

        cost[0] = 30;
        cost[1] = 35;
        cost[2] = 40;
        cost[3] = 45;
        cost[4] = 50;

        damage[0] = 3;
        damage[1] = 3;
        damage[2] = 3;
        damage[3] = 3;
        damage[4] = 3;
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