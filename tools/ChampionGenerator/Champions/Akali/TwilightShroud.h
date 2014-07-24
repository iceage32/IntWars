#ifndef _SPELL_TWILIGHTSHROUD_H
#define _SPELL_TWILIGHTSHROUD_H

#include "Spell.h"

#define ID_TWILIGHTSHROUD 0x00000000

class TwilightShroud : public Spell {
    private:
    float damage[5];

    public:
    TwilightShroud(Champion* owner) : Spell(ID_TWILIGHTSHROUD, owner, 0.25f, 0) {
        cooldown[0] = 20f;
        cooldown[1] = 20f;
        cooldown[2] = 20f;
        cooldown[3] = 20f;
        cooldown[4] = 20f;

        cost[0] = 80;
        cost[1] = 75;
        cost[2] = 70;
        cost[3] = 65;
        cost[4] = 60;

        damage[0] = 8;
        damage[1] = 8;
        damage[2] = 8;
        damage[3] = 8;
        damage[4] = 8;
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