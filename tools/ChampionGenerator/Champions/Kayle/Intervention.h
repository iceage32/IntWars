#ifndef _SPELL_INTERVENTION_H
#define _SPELL_INTERVENTION_H

#include "Spell.h"

#define ID_INTERVENTION 0x00000000

class Intervention : public Spell {
    private:
    float damage[5];

    public:
    Intervention(Champion* owner) : Spell(ID_INTERVENTION, owner, 0.25f, 0) {
        cooldown[0] = 110f;
        cooldown[1] = 95f;
        cooldown[2] = 80f;
        cooldown[3] = 0f;
        cooldown[4] = 0f;

        cost[0] = 0;
        cost[1] = 0;
        cost[2] = 0;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 2;
        damage[1] = 2;
        damage[2] = 2;
        damage[3] = 2;
        damage[4] = 2;
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