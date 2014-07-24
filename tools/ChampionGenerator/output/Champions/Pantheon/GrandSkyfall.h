#ifndef _SPELL_GRANDSKYFALL_H
#define _SPELL_GRANDSKYFALL_H

#include "Spell.h"

#define ID_GRANDSKYFALL 0x00000000

class GrandSkyfall : public Spell {
    private:
    float damage[5];

    public:
    GrandSkyfall(Champion* owner) : Spell(ID_GRANDSKYFALL, owner, 0.25f, 0) {
        cooldown[0] = 150.0f;
        cooldown[1] = 135.0f;
        cooldown[2] = 120.0f;
        cooldown[3] = 0.0f;
        cooldown[4] = 0.0f;

        cost[0] = 125;
        cost[1] = 125;
        cost[2] = 125;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 400;
        damage[1] = 400;
        damage[2] = 400;
        damage[3] = 400;
        damage[4] = 400;
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