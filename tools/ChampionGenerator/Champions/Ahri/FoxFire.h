#ifndef _SPELL_FOXFIRE_H
#define _SPELL_FOXFIRE_H

#include "Spell.h"

#define ID_FOXFIRE 0x00000000

class FoxFire : public Spell {
    private:
    float damage[5];

    public:
    FoxFire(Champion* owner) : Spell(ID_FOXFIRE, owner, 0.25f, 0) {
        cooldown[0] = 9.0f;
        cooldown[1] = 8.0f;
        cooldown[2] = 7.0f;
        cooldown[3] = 6.0f;
        cooldown[4] = 5.0f;

        cost[0] = 50;
        cost[1] = 50;
        cost[2] = 50;
        cost[3] = 50;
        cost[4] = 50;

        damage[0] = 40;
        damage[1] = 40;
        damage[2] = 40;
        damage[3] = 40;
        damage[4] = 40;
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