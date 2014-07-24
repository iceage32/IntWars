#ifndef _SPELL_STARCALL_H
#define _SPELL_STARCALL_H

#include "Spell.h"

#define ID_STARCALL 0x00000000

class Starcall : public Spell {
    private:
    float damage[5];

    public:
    Starcall(Champion* owner) : Spell(ID_STARCALL, owner, 0.25f, 0) {
        cooldown[0] = 2.5f;
        cooldown[1] = 2.5f;
        cooldown[2] = 2.5f;
        cooldown[3] = 2.5f;
        cooldown[4] = 2.5f;

        cost[0] = 30;
        cost[1] = 40;
        cost[2] = 50;
        cost[3] = 60;
        cost[4] = 70;

        damage[0] = 40;
        damage[1] = 40;
        damage[2] = 40;
        damage[3] = 40;
        damage[4] = 40;
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