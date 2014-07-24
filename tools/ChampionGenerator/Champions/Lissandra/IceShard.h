#ifndef _SPELL_ICESHARD_H
#define _SPELL_ICESHARD_H

#include "Spell.h"

#define ID_ICESHARD 0x00000000

class IceShard : public Spell {
    private:
    float damage[5];

    public:
    IceShard(Champion* owner) : Spell(ID_ICESHARD, owner, 0.25f, 0) {
        cooldown[0] = 6.0f;
        cooldown[1] = 5.5f;
        cooldown[2] = 5.0f;
        cooldown[3] = 4.5f;
        cooldown[4] = 4.0f;

        cost[0] = 85;
        cost[1] = 85;
        cost[2] = 85;
        cost[3] = 85;
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