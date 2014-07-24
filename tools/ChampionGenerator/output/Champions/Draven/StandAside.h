#ifndef _SPELL_STANDASIDE_H
#define _SPELL_STANDASIDE_H

#include "Spell.h"

#define ID_STANDASIDE 0x00000000

class StandAside : public Spell {
    private:
    float damage[5];

    public:
    StandAside(Champion* owner) : Spell(ID_STANDASIDE, owner, 0.25f, 0) {
        cooldown[0] = 18.0f;
        cooldown[1] = 17.0f;
        cooldown[2] = 16.0f;
        cooldown[3] = 15.0f;
        cooldown[4] = 14.0f;

        cost[0] = 70;
        cost[1] = 70;
        cost[2] = 70;
        cost[3] = 70;
        cost[4] = 70;

        damage[0] = 70;
        damage[1] = 70;
        damage[2] = 70;
        damage[3] = 70;
        damage[4] = 70;
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