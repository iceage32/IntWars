#ifndef _SPELL_BOUNCINGBOMB_H
#define _SPELL_BOUNCINGBOMB_H

#include "Spell.h"

#define ID_BOUNCINGBOMB 0x00000000

class BouncingBomb : public Spell {
    private:
    float damage[5];

    public:
    BouncingBomb(Champion* owner) : Spell(ID_BOUNCINGBOMB, owner, 0.25f, 0) {
        cooldown[0] = 6f;
        cooldown[1] = 5.5f;
        cooldown[2] = 5f;
        cooldown[3] = 4.5f;
        cooldown[4] = 4f;

        cost[0] = 50;
        cost[1] = 60;
        cost[2] = 70;
        cost[3] = 80;
        cost[4] = 90;

        damage[0] = 75;
        damage[1] = 75;
        damage[2] = 75;
        damage[3] = 75;
        damage[4] = 75;
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