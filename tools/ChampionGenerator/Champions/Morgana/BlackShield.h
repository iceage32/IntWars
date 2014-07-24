#ifndef _SPELL_BLACKSHIELD_H
#define _SPELL_BLACKSHIELD_H

#include "Spell.h"

#define ID_BLACKSHIELD 0x00000000

class BlackShield : public Spell {
    private:
    float damage[5];

    public:
    BlackShield(Champion* owner) : Spell(ID_BLACKSHIELD, owner, 0.25f, 0) {
        cooldown[0] = 23f;
        cooldown[1] = 21f;
        cooldown[2] = 19f;
        cooldown[3] = 17f;
        cooldown[4] = 15f;

        cost[0] = 50;
        cost[1] = 50;
        cost[2] = 50;
        cost[3] = 50;
        cost[4] = 50;

        damage[0] = 95;
        damage[1] = 95;
        damage[2] = 95;
        damage[3] = 95;
        damage[4] = 95;
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