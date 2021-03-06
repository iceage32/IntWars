#ifndef _SPELL_BUSHWHACKPOUNCE_H
#define _SPELL_BUSHWHACKPOUNCE_H

#include "Spell.h"

#define ID_BUSHWHACKPOUNCE 0x00000000

class BushwhackPounce : public Spell {
    private:
    float damage[5];

    public:
    BushwhackPounce(Champion* owner) : Spell(ID_BUSHWHACKPOUNCE, owner, 0.25f, 0) {
        cooldown[0] = 13.0f;
        cooldown[1] = 12.0f;
        cooldown[2] = 11.0f;
        cooldown[3] = 10.0f;
        cooldown[4] = 9.0f;

        cost[0] = 40;
        cost[1] = 45;
        cost[2] = 50;
        cost[3] = 55;
        cost[4] = 60;

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