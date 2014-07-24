#ifndef _SPELL_CHRONOSHIFT_H
#define _SPELL_CHRONOSHIFT_H

#include "Spell.h"

#define ID_CHRONOSHIFT 0x00000000

class Chronoshift : public Spell {
    private:
    float damage[5];

    public:
    Chronoshift(Champion* owner) : Spell(ID_CHRONOSHIFT, owner, 0.25f, 0) {
        cooldown[0] = 180f;
        cooldown[1] = 180f;
        cooldown[2] = 180f;
        cooldown[3] = 0f;
        cooldown[4] = 0f;

        cost[0] = 125;
        cost[1] = 150;
        cost[2] = 175;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 600;
        damage[1] = 600;
        damage[2] = 600;
        damage[3] = 600;
        damage[4] = 600;
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