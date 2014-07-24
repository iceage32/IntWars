#ifndef _SPELL_HAILOFARROWS_H
#define _SPELL_HAILOFARROWS_H

#include "Spell.h"

#define ID_HAILOFARROWS 0x00000000

class HailofArrows : public Spell {
    private:
    float damage[5];

    public:
    HailofArrows(Champion* owner) : Spell(ID_HAILOFARROWS, owner, 0.25f, 0) {
        cooldown[0] = 18.0f;
        cooldown[1] = 16.0f;
        cooldown[2] = 14.0f;
        cooldown[3] = 12.0f;
        cooldown[4] = 10.0f;

        cost[0] = 80;
        cost[1] = 80;
        cost[2] = 80;
        cost[3] = 80;
        cost[4] = 80;

        damage[0] = 65;
        damage[1] = 65;
        damage[2] = 65;
        damage[3] = 65;
        damage[4] = 65;
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