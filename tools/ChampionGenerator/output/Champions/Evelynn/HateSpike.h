#ifndef _SPELL_HATESPIKE_H
#define _SPELL_HATESPIKE_H

#include "Spell.h"

#define ID_HATESPIKE 0x00000000

class HateSpike : public Spell {
    private:
    float damage[5];

    public:
    HateSpike(Champion* owner) : Spell(ID_HATESPIKE, owner, 0.25f, 0) {
        cooldown[0] = 1.5f;
        cooldown[1] = 1.5f;
        cooldown[2] = 1.5f;
        cooldown[3] = 1.5f;
        cooldown[4] = 1.5f;

        cost[0] = 16;
        cost[1] = 22;
        cost[2] = 28;
        cost[3] = 34;
        cost[4] = 40;

        damage[0] = 40;
        damage[1] = 40;
        damage[2] = 40;
        damage[3] = 40;
        damage[4] = 40;
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