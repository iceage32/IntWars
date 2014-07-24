#ifndef _SPELL_RAVENOUSFLOCK_H
#define _SPELL_RAVENOUSFLOCK_H

#include "Spell.h"

#define ID_RAVENOUSFLOCK 0x00000000

class RavenousFlock : public Spell {
    private:
    float damage[5];

    public:
    RavenousFlock(Champion* owner) : Spell(ID_RAVENOUSFLOCK, owner, 0.25f, 0) {
        cooldown[0] = 8.0f;
        cooldown[1] = 8.0f;
        cooldown[2] = 8.0f;
        cooldown[3] = 0.0f;
        cooldown[4] = 0.0f;

        cost[0] = 25;
        cost[1] = 25;
        cost[2] = 25;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 50;
        damage[1] = 50;
        damage[2] = 50;
        damage[3] = 50;
        damage[4] = 50;
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