#ifndef _SPELL_DEADLYBLOOM_H
#define _SPELL_DEADLYBLOOM_H

#include "Spell.h"

#define ID_DEADLYBLOOM 0x00000000

class DeadlyBloom : public Spell {
    private:
    float damage[5];

    public:
    DeadlyBloom(Champion* owner) : Spell(ID_DEADLYBLOOM, owner, 0.25f, 0) {
        cooldown[0] = 7.0f;
        cooldown[1] = 6.5f;
        cooldown[2] = 6.0f;
        cooldown[3] = 5.5f;
        cooldown[4] = 5.0f;

        cost[0] = 75;
        cost[1] = 80;
        cost[2] = 85;
        cost[3] = 90;
        cost[4] = 95;

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