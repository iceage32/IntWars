#ifndef _SPELL_DECEIVE_H
#define _SPELL_DECEIVE_H

#include "Spell.h"

#define ID_DECEIVE 0x00000000

class Deceive : public Spell {
    private:
    float damage[5];

    public:
    Deceive(Champion* owner) : Spell(ID_DECEIVE, owner, 0.25f, 0) {
        cooldown[0] = 0.0f;
        cooldown[1] = 0.0f;
        cooldown[2] = 0.0f;
        cooldown[3] = 0.0f;
        cooldown[4] = 0.0f;

        cost[0] = 90;
        cost[1] = 80;
        cost[2] = 70;
        cost[3] = 60;
        cost[4] = 50;

        damage[0] = 140;
        damage[1] = 140;
        damage[2] = 140;
        damage[3] = 140;
        damage[4] = 140;
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