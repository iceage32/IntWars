#ifndef _SPELL_SHROUDOFDARKNESS_H
#define _SPELL_SHROUDOFDARKNESS_H

#include "Spell.h"

#define ID_SHROUDOFDARKNESS 0x00000000

class ShroudofDarkness : public Spell {
    private:
    float damage[5];

    public:
    ShroudofDarkness(Champion* owner) : Spell(ID_SHROUDOFDARKNESS, owner, 0.25f, 0) {
        cooldown[0] = 20f;
        cooldown[1] = 18f;
        cooldown[2] = 16f;
        cooldown[3] = 14f;
        cooldown[4] = 12f;

        cost[0] = 50;
        cost[1] = 50;
        cost[2] = 50;
        cost[3] = 50;
        cost[4] = 50;

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