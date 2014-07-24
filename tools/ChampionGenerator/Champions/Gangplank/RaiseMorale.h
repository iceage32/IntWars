#ifndef _SPELL_RAISEMORALE_H
#define _SPELL_RAISEMORALE_H

#include "Spell.h"

#define ID_RAISEMORALE 0x00000000

class RaiseMorale : public Spell {
    private:
    float damage[5];

    public:
    RaiseMorale(Champion* owner) : Spell(ID_RAISEMORALE, owner, 0.25f, 0) {
        cooldown[0] = 20f;
        cooldown[1] = 20f;
        cooldown[2] = 20f;
        cooldown[3] = 20f;
        cooldown[4] = 20f;

        cost[0] = 50;
        cost[1] = 55;
        cost[2] = 60;
        cost[3] = 65;
        cost[4] = 70;

        damage[0] = 8;
        damage[1] = 8;
        damage[2] = 8;
        damage[3] = 8;
        damage[4] = 8;
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