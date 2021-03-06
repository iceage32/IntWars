#ifndef _SPELL_MEDITATE_H
#define _SPELL_MEDITATE_H

#include "Spell.h"

#define ID_MEDITATE 0x00000000

class Meditate : public Spell {
    private:
    float damage[5];

    public:
    Meditate(Champion* owner) : Spell(ID_MEDITATE, owner, 0.25f, 0) {
        cooldown[0] = 35.0f;
        cooldown[1] = 35.0f;
        cooldown[2] = 35.0f;
        cooldown[3] = 35.0f;
        cooldown[4] = 35.0f;

        cost[0] = 50;
        cost[1] = 50;
        cost[2] = 50;
        cost[3] = 50;
        cost[4] = 50;

        damage[0] = 30;
        damage[1] = 30;
        damage[2] = 30;
        damage[3] = 30;
        damage[4] = 30;
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