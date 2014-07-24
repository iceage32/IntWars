#ifndef _SPELL_CHOMP_H
#define _SPELL_CHOMP_H

#include "Spell.h"

#define ID_CHOMP 0x00000000

class Chomp : public Spell {
    private:
    float damage[5];

    public:
    Chomp(Champion* owner) : Spell(ID_CHOMP, owner, 0.25f, 0) {
        cooldown[0] = 4f;
        cooldown[1] = 4f;
        cooldown[2] = 4f;
        cooldown[3] = 4f;
        cooldown[4] = 4f;

        cost[0] = 30;
        cost[1] = 30;
        cost[2] = 30;
        cost[3] = 30;
        cost[4] = 30;

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