#ifndef _SPELL_THUNDERINGBLOWACCELERATIONGATE_H
#define _SPELL_THUNDERINGBLOWACCELERATIONGATE_H

#include "Spell.h"

#define ID_THUNDERINGBLOWACCELERATIONGATE 0x00000000

class ThunderingBlowAccelerationGate : public Spell {
    private:
    float damage[5];

    public:
    ThunderingBlowAccelerationGate(Champion* owner) : Spell(ID_THUNDERINGBLOWACCELERATIONGATE, owner, 0.25f, 0) {
        cooldown[0] = 14.0f;
        cooldown[1] = 13.0f;
        cooldown[2] = 12.0f;
        cooldown[3] = 11.0f;
        cooldown[4] = 10.0f;

        cost[0] = 40;
        cost[1] = 50;
        cost[2] = 60;
        cost[3] = 70;
        cost[4] = 80;

        damage[0] = 200;
        damage[1] = 200;
        damage[2] = 200;
        damage[3] = 200;
        damage[4] = 200;
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