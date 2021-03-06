#ifndef _SPELL_TORMENT_H
#define _SPELL_TORMENT_H

#include "Spell.h"

#define ID_TORMENT 0x00000000

class Torment : public Spell {
    private:
    float damage[5];

    public:
    Torment(Champion* owner) : Spell(ID_TORMENT, owner, 0.25f, 0) {
        cooldown[0] = 10.0f;
        cooldown[1] = 10.0f;
        cooldown[2] = 10.0f;
        cooldown[3] = 10.0f;
        cooldown[4] = 10.0f;

        cost[0] = 65;
        cost[1] = 70;
        cost[2] = 75;
        cost[3] = 80;
        cost[4] = 85;

        damage[0] = 75;
        damage[1] = 75;
        damage[2] = 75;
        damage[3] = 75;
        damage[4] = 75;
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