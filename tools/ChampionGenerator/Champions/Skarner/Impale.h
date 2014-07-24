#ifndef _SPELL_IMPALE_H
#define _SPELL_IMPALE_H

#include "Spell.h"

#define ID_IMPALE 0x00000000

class Impale : public Spell {
    private:
    float damage[5];

    public:
    Impale(Champion* owner) : Spell(ID_IMPALE, owner, 0.25f, 0) {
        cooldown[0] = 110f;
        cooldown[1] = 100f;
        cooldown[2] = 90f;
        cooldown[3] = 0f;
        cooldown[4] = 0f;

        cost[0] = 100;
        cost[1] = 125;
        cost[2] = 150;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 1.75;
        damage[1] = 1.75;
        damage[2] = 1.75;
        damage[3] = 1.75;
        damage[4] = 1.75;
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