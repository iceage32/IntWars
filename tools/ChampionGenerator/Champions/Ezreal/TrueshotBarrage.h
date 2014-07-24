#ifndef _SPELL_TRUESHOTBARRAGE_H
#define _SPELL_TRUESHOTBARRAGE_H

#include "Spell.h"

#define ID_TRUESHOTBARRAGE 0x00000000

class TrueshotBarrage : public Spell {
    private:
    float damage[5];

    public:
    TrueshotBarrage(Champion* owner) : Spell(ID_TRUESHOTBARRAGE, owner, 0.25f, 0) {
        cooldown[0] = 80f;
        cooldown[1] = 80f;
        cooldown[2] = 80f;
        cooldown[3] = 0f;
        cooldown[4] = 0f;

        cost[0] = 100;
        cost[1] = 100;
        cost[2] = 100;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 350;
        damage[1] = 350;
        damage[2] = 350;
        damage[3] = 350;
        damage[4] = 350;
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