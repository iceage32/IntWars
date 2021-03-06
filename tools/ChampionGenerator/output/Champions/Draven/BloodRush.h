#ifndef _SPELL_BLOODRUSH_H
#define _SPELL_BLOODRUSH_H

#include "Spell.h"

#define ID_BLOODRUSH 0x00000000

class BloodRush : public Spell {
    private:
    float damage[5];

    public:
    BloodRush(Champion* owner) : Spell(ID_BLOODRUSH, owner, 0.25f, 0) {
        cooldown[0] = 12.0f;
        cooldown[1] = 12.0f;
        cooldown[2] = 12.0f;
        cooldown[3] = 12.0f;
        cooldown[4] = 12.0f;

        cost[0] = 40;
        cost[1] = 40;
        cost[2] = 40;
        cost[3] = 40;
        cost[4] = 40;

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