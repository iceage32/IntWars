#ifndef _SPELL_POWERFIST_H
#define _SPELL_POWERFIST_H

#include "Spell.h"

#define ID_POWERFIST 0x00000000

class PowerFist : public Spell {
    private:
    float damage[5];

    public:
    PowerFist(Champion* owner) : Spell(ID_POWERFIST, owner, 0.25f, 0) {
        cooldown[0] = 9f;
        cooldown[1] = 8f;
        cooldown[2] = 7f;
        cooldown[3] = 6f;
        cooldown[4] = 5f;

        cost[0] = 25;
        cost[1] = 25;
        cost[2] = 25;
        cost[3] = 25;
        cost[4] = 25;

        damage[0] = 40;
        damage[1] = 40;
        damage[2] = 40;
        damage[3] = 40;
        damage[4] = 40;
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