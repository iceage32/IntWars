#ifndef _SPELL_RAVAGE_H
#define _SPELL_RAVAGE_H

#include "Spell.h"

#define ID_RAVAGE 0x00000000

class Ravage : public Spell {
    private:
    float damage[5];

    public:
    Ravage(Champion* owner) : Spell(ID_RAVAGE, owner, 0.25f, 0) {
        cooldown[0] = 9f;
        cooldown[1] = 9f;
        cooldown[2] = 9f;
        cooldown[3] = 9f;
        cooldown[4] = 9f;

        cost[0] = 50;
        cost[1] = 55;
        cost[2] = 60;
        cost[3] = 65;
        cost[4] = 70;

        damage[0] = 70;
        damage[1] = 70;
        damage[2] = 70;
        damage[3] = 70;
        damage[4] = 70;
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