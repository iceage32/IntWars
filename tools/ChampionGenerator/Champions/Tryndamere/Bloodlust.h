#ifndef _SPELL_BLOODLUST_H
#define _SPELL_BLOODLUST_H

#include "Spell.h"

#define ID_BLOODLUST 0x00000000

class Bloodlust : public Spell {
    private:
    float damage[5];

    public:
    Bloodlust(Champion* owner) : Spell(ID_BLOODLUST, owner, 0.25f, 0) {
        cooldown[0] = 12.0f;
        cooldown[1] = 12.0f;
        cooldown[2] = 12.0f;
        cooldown[3] = 12.0f;
        cooldown[4] = 12.0f;

        cost[0] = 0;
        cost[1] = 0;
        cost[2] = 0;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 5;
        damage[1] = 5;
        damage[2] = 5;
        damage[3] = 5;
        damage[4] = 5;
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