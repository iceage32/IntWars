#ifndef _SPELL_FROSTSHOT_H
#define _SPELL_FROSTSHOT_H

#include "Spell.h"

#define ID_FROSTSHOT 0x00000000

class FrostShot : public Spell {
    private:
    float damage[5];

    public:
    FrostShot(Champion* owner) : Spell(ID_FROSTSHOT, owner, 0.25f, 0) {
        cooldown[0] = 0.0f;
        cooldown[1] = 0.0f;
        cooldown[2] = 0.0f;
        cooldown[3] = 0.0f;
        cooldown[4] = 0.0f;

        cost[0] = 0;
        cost[1] = 0;
        cost[2] = 0;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 15;
        damage[1] = 15;
        damage[2] = 15;
        damage[3] = 15;
        damage[4] = 15;
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