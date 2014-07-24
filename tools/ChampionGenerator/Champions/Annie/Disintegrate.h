#ifndef _SPELL_DISINTEGRATE_H
#define _SPELL_DISINTEGRATE_H

#include "Spell.h"

#define ID_DISINTEGRATE 0x00000000

class Disintegrate : public Spell {
    private:
    float damage[5];

    public:
    Disintegrate(Champion* owner) : Spell(ID_DISINTEGRATE, owner, 0.25f, 0) {
        cooldown[0] = 4f;
        cooldown[1] = 4f;
        cooldown[2] = 4f;
        cooldown[3] = 4f;
        cooldown[4] = 4f;

        cost[0] = 60;
        cost[1] = 65;
        cost[2] = 70;
        cost[3] = 75;
        cost[4] = 80;

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