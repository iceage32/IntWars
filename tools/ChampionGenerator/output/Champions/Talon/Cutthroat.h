#ifndef _SPELL_CUTTHROAT_H
#define _SPELL_CUTTHROAT_H

#include "Spell.h"

#define ID_CUTTHROAT 0x00000000

class Cutthroat : public Spell {
    private:
    float damage[5];

    public:
    Cutthroat(Champion* owner) : Spell(ID_CUTTHROAT, owner, 0.25f, 0) {
        cooldown[0] = 18.0f;
        cooldown[1] = 16.0f;
        cooldown[2] = 14.0f;
        cooldown[3] = 12.0f;
        cooldown[4] = 10.0f;

        cost[0] = 35;
        cost[1] = 40;
        cost[2] = 45;
        cost[3] = 50;
        cost[4] = 55;

        damage[0] = 1;
        damage[1] = 1;
        damage[2] = 1;
        damage[3] = 1;
        damage[4] = 1;
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