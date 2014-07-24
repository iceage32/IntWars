#ifndef _SPELL_RUPTURE_H
#define _SPELL_RUPTURE_H

#include "Spell.h"

#define ID_RUPTURE 0x00000000

class Rupture : public Spell {
    private:
    float damage[5];

    public:
    Rupture(Champion* owner) : Spell(ID_RUPTURE, owner, 0.25f, 0) {
        cooldown[0] = 9f;
        cooldown[1] = 9f;
        cooldown[2] = 9f;
        cooldown[3] = 9f;
        cooldown[4] = 9f;

        cost[0] = 90;
        cost[1] = 90;
        cost[2] = 90;
        cost[3] = 90;
        cost[4] = 90;

        damage[0] = 80;
        damage[1] = 80;
        damage[2] = 80;
        damage[3] = 80;
        damage[4] = 80;
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