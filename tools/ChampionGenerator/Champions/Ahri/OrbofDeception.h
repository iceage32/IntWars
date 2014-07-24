#ifndef _SPELL_ORBOFDECEPTION_H
#define _SPELL_ORBOFDECEPTION_H

#include "Spell.h"

#define ID_ORBOFDECEPTION 0x00000000

class OrbofDeception : public Spell {
    private:
    float damage[5];

    public:
    OrbofDeception(Champion* owner) : Spell(ID_ORBOFDECEPTION, owner, 0.25f, 0) {
        cooldown[0] = 7f;
        cooldown[1] = 7f;
        cooldown[2] = 7f;
        cooldown[3] = 7f;
        cooldown[4] = 7f;

        cost[0] = 55;
        cost[1] = 60;
        cost[2] = 65;
        cost[3] = 70;
        cost[4] = 75;

        damage[0] = 40;
        damage[1] = 40;
        damage[2] = 40;
        damage[3] = 40;
        damage[4] = 40;
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