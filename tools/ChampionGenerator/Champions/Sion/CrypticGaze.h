#ifndef _SPELL_CRYPTICGAZE_H
#define _SPELL_CRYPTICGAZE_H

#include "Spell.h"

#define ID_CRYPTICGAZE 0x00000000

class CrypticGaze : public Spell {
    private:
    float damage[5];

    public:
    CrypticGaze(Champion* owner) : Spell(ID_CRYPTICGAZE, owner, 0.25f, 0) {
        cooldown[0] = 12.0f;
        cooldown[1] = 11.0f;
        cooldown[2] = 10.0f;
        cooldown[3] = 9.0f;
        cooldown[4] = 8.0f;

        cost[0] = 100;
        cost[1] = 100;
        cost[2] = 100;
        cost[3] = 100;
        cost[4] = 100;

        damage[0] = 70;
        damage[1] = 70;
        damage[2] = 70;
        damage[3] = 70;
        damage[4] = 70;
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