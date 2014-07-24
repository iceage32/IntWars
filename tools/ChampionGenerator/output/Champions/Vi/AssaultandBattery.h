#ifndef _SPELL_ASSAULTANDBATTERY_H
#define _SPELL_ASSAULTANDBATTERY_H

#include "Spell.h"

#define ID_ASSAULTANDBATTERY 0x00000000

class AssaultandBattery : public Spell {
    private:
    float damage[5];

    public:
    AssaultandBattery(Champion* owner) : Spell(ID_ASSAULTANDBATTERY, owner, 0.25f, 0) {
        cooldown[0] = 150.0f;
        cooldown[1] = 115.0f;
        cooldown[2] = 80.0f;
        cooldown[3] = 0.0f;
        cooldown[4] = 0.0f;

        cost[0] = 100;
        cost[1] = 125;
        cost[2] = 150;
        cost[3] = 0;
        cost[4] = 0;

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