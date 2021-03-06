#ifndef _SPELL_WHIRLINGDEATH_H
#define _SPELL_WHIRLINGDEATH_H

#include "Spell.h"

#define ID_WHIRLINGDEATH 0x00000000

class WhirlingDeath : public Spell {
    private:
    float damage[5];

    public:
    WhirlingDeath(Champion* owner) : Spell(ID_WHIRLINGDEATH, owner, 0.25f, 0) {
        cooldown[0] = 110.0f;
        cooldown[1] = 100.0f;
        cooldown[2] = 90.0f;
        cooldown[3] = 0.0f;
        cooldown[4] = 0.0f;

        cost[0] = 120;
        cost[1] = 120;
        cost[2] = 120;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 175;
        damage[1] = 175;
        damage[2] = 175;
        damage[3] = 175;
        damage[4] = 175;
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