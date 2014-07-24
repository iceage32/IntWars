#ifndef _SPELL_FINALSPARK_H
#define _SPELL_FINALSPARK_H

#include "Spell.h"

#define ID_FINALSPARK 0x00000000

class FinalSpark : public Spell {
    private:
    float damage[5];

    public:
    FinalSpark(Champion* owner) : Spell(ID_FINALSPARK, owner, 0.25f, 0) {
        cooldown[0] = 80.0f;
        cooldown[1] = 65.0f;
        cooldown[2] = 50.0f;
        cooldown[3] = 0.0f;
        cooldown[4] = 0.0f;

        cost[0] = 100;
        cost[1] = 100;
        cost[2] = 100;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 300;
        damage[1] = 300;
        damage[2] = 300;
        damage[3] = 300;
        damage[4] = 300;
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