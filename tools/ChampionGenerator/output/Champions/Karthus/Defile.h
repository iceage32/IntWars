#ifndef _SPELL_DEFILE_H
#define _SPELL_DEFILE_H

#include "Spell.h"

#define ID_DEFILE 0x00000000

class Defile : public Spell {
    private:
    float damage[5];

    public:
    Defile(Champion* owner) : Spell(ID_DEFILE, owner, 0.25f, 0) {
        cooldown[0] = 0.5f;
        cooldown[1] = 0.5f;
        cooldown[2] = 0.5f;
        cooldown[3] = 0.5f;
        cooldown[4] = 0.5f;

        cost[0] = 30;
        cost[1] = 42;
        cost[2] = 54;
        cost[3] = 66;
        cost[4] = 78;

        damage[0] = 30;
        damage[1] = 30;
        damage[2] = 30;
        damage[3] = 30;
        damage[4] = 30;
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