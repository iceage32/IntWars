#ifndef _SPELL_PERMAFROST_H
#define _SPELL_PERMAFROST_H

#include "Spell.h"

#define ID_PERMAFROST 0x00000000

class Permafrost : public Spell {
    private:
    float damage[5];

    public:
    Permafrost(Champion* owner) : Spell(ID_PERMAFROST, owner, 0.25f, 0) {
        cooldown[0] = 11f;
        cooldown[1] = 11f;
        cooldown[2] = 11f;
        cooldown[3] = 11f;
        cooldown[4] = 11f;

        cost[0] = 55;
        cost[1] = 55;
        cost[2] = 55;
        cost[3] = 55;
        cost[4] = 55;

        damage[0] = 60;
        damage[1] = 60;
        damage[2] = 60;
        damage[3] = 60;
        damage[4] = 60;
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