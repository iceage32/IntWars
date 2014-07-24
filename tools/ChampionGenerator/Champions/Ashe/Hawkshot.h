#ifndef _SPELL_HAWKSHOT_H
#define _SPELL_HAWKSHOT_H

#include "Spell.h"

#define ID_HAWKSHOT 0x00000000

class Hawkshot : public Spell {
    private:
    float damage[5];

    public:
    Hawkshot(Champion* owner) : Spell(ID_HAWKSHOT, owner, 0.25f, 0) {
        cooldown[0] = 60f;
        cooldown[1] = 55f;
        cooldown[2] = 50f;
        cooldown[3] = 45f;
        cooldown[4] = 40f;

        cost[0] = 0;
        cost[1] = 0;
        cost[2] = 0;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 3;
        damage[1] = 3;
        damage[2] = 3;
        damage[3] = 3;
        damage[4] = 3;
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