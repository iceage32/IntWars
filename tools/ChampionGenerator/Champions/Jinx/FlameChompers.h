#ifndef _SPELL_FLAMECHOMPERS_H
#define _SPELL_FLAMECHOMPERS_H

#include "Spell.h"

#define ID_FLAMECHOMPERS 0x00000000

class FlameChompers : public Spell {
    private:
    float damage[5];

    public:
    FlameChompers(Champion* owner) : Spell(ID_FLAMECHOMPERS, owner, 0.25f, 0) {
        cooldown[0] = 24f;
        cooldown[1] = 22f;
        cooldown[2] = 20f;
        cooldown[3] = 18f;
        cooldown[4] = 16f;

        cost[0] = 50;
        cost[1] = 50;
        cost[2] = 50;
        cost[3] = 50;
        cost[4] = 50;

        damage[0] = 80;
        damage[1] = 80;
        damage[2] = 80;
        damage[3] = 80;
        damage[4] = 80;
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