#ifndef _SPELL_EYEOFTHESTORM_H
#define _SPELL_EYEOFTHESTORM_H

#include "Spell.h"

#define ID_EYEOFTHESTORM 0x00000000

class EyeOfTheStorm : public Spell {
    private:
    float damage[5];

    public:
    EyeOfTheStorm(Champion* owner) : Spell(ID_EYEOFTHESTORM, owner, 0.25f, 0) {
        cooldown[0] = 0f;
        cooldown[1] = 0f;
        cooldown[2] = 0f;
        cooldown[3] = 0f;
        cooldown[4] = 0f;

        cost[0] = 70;
        cost[1] = 80;
        cost[2] = 90;
        cost[3] = 100;
        cost[4] = 110;

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