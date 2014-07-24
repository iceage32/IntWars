#ifndef _SPELL_DEMACIANSTANDARD_H
#define _SPELL_DEMACIANSTANDARD_H

#include "Spell.h"

#define ID_DEMACIANSTANDARD 0x00000000

class DemacianStandard : public Spell {
    private:
    float damage[5];

    public:
    DemacianStandard(Champion* owner) : Spell(ID_DEMACIANSTANDARD, owner, 0.25f, 0) {
        cooldown[0] = 13.0f;
        cooldown[1] = 13.0f;
        cooldown[2] = 13.0f;
        cooldown[3] = 13.0f;
        cooldown[4] = 13.0f;

        cost[0] = 55;
        cost[1] = 55;
        cost[2] = 55;
        cost[3] = 55;
        cost[4] = 55;

        damage[0] = 10;
        damage[1] = 10;
        damage[2] = 10;
        damage[3] = 10;
        damage[4] = 10;
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