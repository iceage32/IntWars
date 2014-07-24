#ifndef _SPELL_DRAGONSTRIKE_H
#define _SPELL_DRAGONSTRIKE_H

#include "Spell.h"

#define ID_DRAGONSTRIKE 0x00000000

class DragonStrike : public Spell {
    private:
    float damage[5];

    public:
    DragonStrike(Champion* owner) : Spell(ID_DRAGONSTRIKE, owner, 0.25f, 0) {
        cooldown[0] = 10f;
        cooldown[1] = 9f;
        cooldown[2] = 8f;
        cooldown[3] = 7f;
        cooldown[4] = 6f;

        cost[0] = 45;
        cost[1] = 50;
        cost[2] = 55;
        cost[3] = 60;
        cost[4] = 65;

        damage[0] = 70;
        damage[1] = 70;
        damage[2] = 70;
        damage[3] = 70;
        damage[4] = 70;
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