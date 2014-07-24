#ifndef _SPELL_BLADESURGE_H
#define _SPELL_BLADESURGE_H

#include "Spell.h"

#define ID_BLADESURGE 0x00000000

class Bladesurge : public Spell {
    private:
    float damage[5];

    public:
    Bladesurge(Champion* owner) : Spell(ID_BLADESURGE, owner, 0.25f, 0) {
        cooldown[0] = 14f;
        cooldown[1] = 12f;
        cooldown[2] = 10f;
        cooldown[3] = 8f;
        cooldown[4] = 6f;

        cost[0] = 60;
        cost[1] = 65;
        cost[2] = 70;
        cost[3] = 75;
        cost[4] = 80;

        damage[0] = 20;
        damage[1] = 20;
        damage[2] = 20;
        damage[3] = 20;
        damage[4] = 20;
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