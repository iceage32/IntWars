#ifndef _SPELL_WALLOFPAIN_H
#define _SPELL_WALLOFPAIN_H

#include "Spell.h"

#define ID_WALLOFPAIN 0x00000000

class WallofPain : public Spell {
    private:
    float damage[5];

    public:
    WallofPain(Champion* owner) : Spell(ID_WALLOFPAIN, owner, 0.25f, 0) {
        cooldown[0] = 18.0f;
        cooldown[1] = 18.0f;
        cooldown[2] = 18.0f;
        cooldown[3] = 18.0f;
        cooldown[4] = 18.0f;

        cost[0] = 100;
        cost[1] = 100;
        cost[2] = 100;
        cost[3] = 100;
        cost[4] = 100;

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