#ifndef _SPELL_INFECTEDCLEAVER_H
#define _SPELL_INFECTEDCLEAVER_H

#include "Spell.h"

#define ID_INFECTEDCLEAVER 0x00000000

class InfectedCleaver : public Spell {
    private:
    float damage[5];

    public:
    InfectedCleaver(Champion* owner) : Spell(ID_INFECTEDCLEAVER, owner, 0.25f, 0) {
        cooldown[0] = 4.0f;
        cooldown[1] = 4.0f;
        cooldown[2] = 4.0f;
        cooldown[3] = 4.0f;
        cooldown[4] = 4.0f;

        cost[0] = 0;
        cost[1] = 0;
        cost[2] = 0;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 80;
        damage[1] = 80;
        damage[2] = 80;
        damage[3] = 80;
        damage[4] = 80;
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