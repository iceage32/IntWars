#ifndef _SPELL_BULWARK_H
#define _SPELL_BULWARK_H

#include "Spell.h"

#define ID_BULWARK 0x00000000

class Bulwark : public Spell {
    private:
    float damage[5];

    public:
    Bulwark(Champion* owner) : Spell(ID_BULWARK, owner, 0.25f, 0) {
        cooldown[0] = 13f;
        cooldown[1] = 13f;
        cooldown[2] = 13f;
        cooldown[3] = 13f;
        cooldown[4] = 13f;

        cost[0] = 60;
        cost[1] = 60;
        cost[2] = 60;
        cost[3] = 60;
        cost[4] = 60;

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