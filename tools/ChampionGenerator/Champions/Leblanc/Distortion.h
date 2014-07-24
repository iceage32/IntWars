#ifndef _SPELL_DISTORTION_H
#define _SPELL_DISTORTION_H

#include "Spell.h"

#define ID_DISTORTION 0x00000000

class Distortion : public Spell {
    private:
    float damage[5];

    public:
    Distortion(Champion* owner) : Spell(ID_DISTORTION, owner, 0.25f, 0) {
        cooldown[0] = 18f;
        cooldown[1] = 16f;
        cooldown[2] = 14f;
        cooldown[3] = 12f;
        cooldown[4] = 10f;

        cost[0] = 80;
        cost[1] = 90;
        cost[2] = 100;
        cost[3] = 110;
        cost[4] = 120;

        damage[0] = 85;
        damage[1] = 85;
        damage[2] = 85;
        damage[3] = 85;
        damage[4] = 85;
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