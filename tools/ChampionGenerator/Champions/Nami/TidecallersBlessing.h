#ifndef _SPELL_TIDECALLERSBLESSING_H
#define _SPELL_TIDECALLERSBLESSING_H

#include "Spell.h"

#define ID_TIDECALLERSBLESSING 0x00000000

class TidecallersBlessing : public Spell {
    private:
    float damage[5];

    public:
    TidecallersBlessing(Champion* owner) : Spell(ID_TIDECALLERSBLESSING, owner, 0.25f, 0) {
        cooldown[0] = 11f;
        cooldown[1] = 11f;
        cooldown[2] = 11f;
        cooldown[3] = 11f;
        cooldown[4] = 11f;

        cost[0] = 55;
        cost[1] = 60;
        cost[2] = 65;
        cost[3] = 70;
        cost[4] = 75;

        damage[0] = 25;
        damage[1] = 25;
        damage[2] = 25;
        damage[3] = 25;
        damage[4] = 25;
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