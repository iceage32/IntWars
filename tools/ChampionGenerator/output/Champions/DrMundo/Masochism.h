#ifndef _SPELL_MASOCHISM_H
#define _SPELL_MASOCHISM_H

#include "Spell.h"

#define ID_MASOCHISM 0x00000000

class Masochism : public Spell {
    private:
    float damage[5];

    public:
    Masochism(Champion* owner) : Spell(ID_MASOCHISM, owner, 0.25f, 0) {
        cooldown[0] = 7.0f;
        cooldown[1] = 7.0f;
        cooldown[2] = 7.0f;
        cooldown[3] = 7.0f;
        cooldown[4] = 7.0f;

        cost[0] = 0;
        cost[1] = 0;
        cost[2] = 0;
        cost[3] = 0;
        cost[4] = 0;

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