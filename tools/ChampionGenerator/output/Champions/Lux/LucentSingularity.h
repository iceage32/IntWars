#ifndef _SPELL_LUCENTSINGULARITY_H
#define _SPELL_LUCENTSINGULARITY_H

#include "Spell.h"

#define ID_LUCENTSINGULARITY 0x00000000

class LucentSingularity : public Spell {
    private:
    float damage[5];

    public:
    LucentSingularity(Champion* owner) : Spell(ID_LUCENTSINGULARITY, owner, 0.25f, 0) {
        cooldown[0] = 10.0f;
        cooldown[1] = 10.0f;
        cooldown[2] = 10.0f;
        cooldown[3] = 10.0f;
        cooldown[4] = 10.0f;

        cost[0] = 70;
        cost[1] = 85;
        cost[2] = 100;
        cost[3] = 115;
        cost[4] = 130;

        damage[0] = 20;
        damage[1] = 20;
        damage[2] = 20;
        damage[3] = 20;
        damage[4] = 20;
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