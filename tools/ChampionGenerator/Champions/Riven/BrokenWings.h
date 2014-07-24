#ifndef _SPELL_BROKENWINGS_H
#define _SPELL_BROKENWINGS_H

#include "Spell.h"

#define ID_BROKENWINGS 0x00000000

class BrokenWings : public Spell {
    private:
    float damage[5];

    public:
    BrokenWings(Champion* owner) : Spell(ID_BROKENWINGS, owner, 0.25f, 0) {
        cooldown[0] = 13f;
        cooldown[1] = 13f;
        cooldown[2] = 13f;
        cooldown[3] = 13f;
        cooldown[4] = 13f;

        cost[0] = 0;
        cost[1] = 0;
        cost[2] = 0;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 10;
        damage[1] = 10;
        damage[2] = 10;
        damage[3] = 10;
        damage[4] = 10;
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