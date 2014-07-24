#ifndef _SPELL_DEVASTATINGBLOW_H
#define _SPELL_DEVASTATINGBLOW_H

#include "Spell.h"

#define ID_DEVASTATINGBLOW 0x00000000

class DevastatingBlow : public Spell {
    private:
    float damage[5];

    public:
    DevastatingBlow(Champion* owner) : Spell(ID_DEVASTATINGBLOW, owner, 0.25f, 0) {
        cooldown[0] = 8.0f;
        cooldown[1] = 7.0f;
        cooldown[2] = 6.0f;
        cooldown[3] = 5.0f;
        cooldown[4] = 4.0f;

        cost[0] = 55;
        cost[1] = 55;
        cost[2] = 55;
        cost[3] = 55;
        cost[4] = 55;

        damage[0] = 8;
        damage[1] = 8;
        damage[2] = 8;
        damage[3] = 8;
        damage[4] = 8;
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