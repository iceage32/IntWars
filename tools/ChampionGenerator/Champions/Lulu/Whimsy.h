#ifndef _SPELL_WHIMSY_H
#define _SPELL_WHIMSY_H

#include "Spell.h"

#define ID_WHIMSY 0x00000000

class Whimsy : public Spell {
    private:
    float damage[5];

    public:
    Whimsy(Champion* owner) : Spell(ID_WHIMSY, owner, 0.25f, 0) {
        cooldown[0] = 18f;
        cooldown[1] = 16.5f;
        cooldown[2] = 15f;
        cooldown[3] = 13.5f;
        cooldown[4] = 12f;

        cost[0] = 65;
        cost[1] = 70;
        cost[2] = 75;
        cost[3] = 80;
        cost[4] = 85;

        damage[0] = 30;
        damage[1] = 30;
        damage[2] = 30;
        damage[3] = 30;
        damage[4] = 30;
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