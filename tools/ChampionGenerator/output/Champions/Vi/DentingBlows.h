#ifndef _SPELL_DENTINGBLOWS_H
#define _SPELL_DENTINGBLOWS_H

#include "Spell.h"

#define ID_DENTINGBLOWS 0x00000000

class DentingBlows : public Spell {
    private:
    float damage[5];

    public:
    DentingBlows(Champion* owner) : Spell(ID_DENTINGBLOWS, owner, 0.25f, 0) {
        cooldown[0] = 0.0f;
        cooldown[1] = 0.0f;
        cooldown[2] = 0.0f;
        cooldown[3] = 0.0f;
        cooldown[4] = 0.0f;

        cost[0] = 0;
        cost[1] = 0;
        cost[2] = 0;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 4;
        damage[1] = 4;
        damage[2] = 4;
        damage[3] = 4;
        damage[4] = 4;
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