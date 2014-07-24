#ifndef _SPELL_ARCANESHIFT_H
#define _SPELL_ARCANESHIFT_H

#include "Spell.h"

#define ID_ARCANESHIFT 0x00000000

class ArcaneShift : public Spell {
    private:
    float damage[5];

    public:
    ArcaneShift(Champion* owner) : Spell(ID_ARCANESHIFT, owner, 0.25f, 0) {
        cooldown[0] = 19f;
        cooldown[1] = 17f;
        cooldown[2] = 15f;
        cooldown[3] = 13f;
        cooldown[4] = 11f;

        cost[0] = 90;
        cost[1] = 90;
        cost[2] = 90;
        cost[3] = 90;
        cost[4] = 90;

        damage[0] = 75;
        damage[1] = 75;
        damage[2] = 75;
        damage[3] = 75;
        damage[4] = 75;
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