#ifndef _SPELL_BRUTALSTRIKES_H
#define _SPELL_BRUTALSTRIKES_H

#include "Spell.h"

#define ID_BRUTALSTRIKES 0x00000000

class BrutalStrikes : public Spell {
    private:
    float damage[5];

    public:
    BrutalStrikes(Champion* owner) : Spell(ID_BRUTALSTRIKES, owner, 0.25f, 0) {
        cooldown[0] = 14f;
        cooldown[1] = 14f;
        cooldown[2] = 14f;
        cooldown[3] = 14f;
        cooldown[4] = 14f;

        cost[0] = 25;
        cost[1] = 25;
        cost[2] = 25;
        cost[3] = 25;
        cost[4] = 25;

        damage[0] = 30;
        damage[1] = 30;
        damage[2] = 30;
        damage[3] = 30;
        damage[4] = 30;
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