#ifndef _SPELL_SPIRITFIRE_H
#define _SPELL_SPIRITFIRE_H

#include "Spell.h"

#define ID_SPIRITFIRE 0x00000000

class SpiritFire : public Spell {
    private:
    float damage[5];

    public:
    SpiritFire(Champion* owner) : Spell(ID_SPIRITFIRE, owner, 0.25f, 0) {
        cooldown[0] = 12f;
        cooldown[1] = 12f;
        cooldown[2] = 12f;
        cooldown[3] = 12f;
        cooldown[4] = 12f;

        cost[0] = 70;
        cost[1] = 85;
        cost[2] = 100;
        cost[3] = 115;
        cost[4] = 130;

        damage[0] = 11;
        damage[1] = 11;
        damage[2] = 11;
        damage[3] = 11;
        damage[4] = 11;
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