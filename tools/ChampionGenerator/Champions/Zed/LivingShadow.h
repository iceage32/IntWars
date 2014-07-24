#ifndef _SPELL_LIVINGSHADOW_H
#define _SPELL_LIVINGSHADOW_H

#include "Spell.h"

#define ID_LIVINGSHADOW 0x00000000

class LivingShadow : public Spell {
    private:
    float damage[5];

    public:
    LivingShadow(Champion* owner) : Spell(ID_LIVINGSHADOW, owner, 0.25f, 0) {
        cooldown[0] = 18f;
        cooldown[1] = 17f;
        cooldown[2] = 16f;
        cooldown[3] = 15f;
        cooldown[4] = 14f;

        cost[0] = 40;
        cost[1] = 35;
        cost[2] = 30;
        cost[3] = 25;
        cost[4] = 20;

        damage[0] = 50;
        damage[1] = 50;
        damage[2] = 50;
        damage[3] = 50;
        damage[4] = 50;
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