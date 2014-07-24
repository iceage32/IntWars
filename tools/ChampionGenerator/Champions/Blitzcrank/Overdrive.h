#ifndef _SPELL_OVERDRIVE_H
#define _SPELL_OVERDRIVE_H

#include "Spell.h"

#define ID_OVERDRIVE 0x00000000

class Overdrive : public Spell {
    private:
    float damage[5];

    public:
    Overdrive(Champion* owner) : Spell(ID_OVERDRIVE, owner, 0.25f, 0) {
        cooldown[0] = 15f;
        cooldown[1] = 15f;
        cooldown[2] = 15f;
        cooldown[3] = 15f;
        cooldown[4] = 15f;

        cost[0] = 75;
        cost[1] = 75;
        cost[2] = 75;
        cost[3] = 75;
        cost[4] = 75;

        damage[0] = 16;
        damage[1] = 16;
        damage[2] = 16;
        damage[3] = 16;
        damage[4] = 16;
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