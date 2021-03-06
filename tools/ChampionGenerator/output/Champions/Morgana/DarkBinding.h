#ifndef _SPELL_DARKBINDING_H
#define _SPELL_DARKBINDING_H

#include "Spell.h"

#define ID_DARKBINDING 0x00000000

class DarkBinding : public Spell {
    private:
    float damage[5];

    public:
    DarkBinding(Champion* owner) : Spell(ID_DARKBINDING, owner, 0.25f, 0) {
        cooldown[0] = 11.0f;
        cooldown[1] = 11.0f;
        cooldown[2] = 11.0f;
        cooldown[3] = 11.0f;
        cooldown[4] = 11.0f;

        cost[0] = 50;
        cost[1] = 60;
        cost[2] = 70;
        cost[3] = 80;
        cost[4] = 90;

        damage[0] = 80;
        damage[1] = 80;
        damage[2] = 80;
        damage[3] = 80;
        damage[4] = 80;
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