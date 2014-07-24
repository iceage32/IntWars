#ifndef _SPELL_EBBANDFLOW_H
#define _SPELL_EBBANDFLOW_H

#include "Spell.h"

#define ID_EBBANDFLOW 0x00000000

class EbbandFlow : public Spell {
    private:
    float damage[5];

    public:
    EbbandFlow(Champion* owner) : Spell(ID_EBBANDFLOW, owner, 0.25f, 0) {
        cooldown[0] = 9f;
        cooldown[1] = 9f;
        cooldown[2] = 9f;
        cooldown[3] = 9f;
        cooldown[4] = 9f;

        cost[0] = 70;
        cost[1] = 85;
        cost[2] = 100;
        cost[3] = 115;
        cost[4] = 130;

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