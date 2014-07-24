#ifndef _SPELL_GATLINGGUN_H
#define _SPELL_GATLINGGUN_H

#include "Spell.h"

#define ID_GATLINGGUN 0x00000000

class GatlingGun : public Spell {
    private:
    float damage[5];

    public:
    GatlingGun(Champion* owner) : Spell(ID_GATLINGGUN, owner, 0.25f, 0) {
        cooldown[0] = 16f;
        cooldown[1] = 16f;
        cooldown[2] = 16f;
        cooldown[3] = 16f;
        cooldown[4] = 16f;

        cost[0] = 50;
        cost[1] = 50;
        cost[2] = 50;
        cost[3] = 50;
        cost[4] = 50;

        damage[0] = 4;
        damage[1] = 4;
        damage[2] = 4;
        damage[3] = 4;
        damage[4] = 4;
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