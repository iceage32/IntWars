#ifndef _SPELL_EQUILIBRIUMSTRIKE_H
#define _SPELL_EQUILIBRIUMSTRIKE_H

#include "Spell.h"

#define ID_EQUILIBRIUMSTRIKE 0x00000000

class EquilibriumStrike : public Spell {
    private:
    float damage[5];

    public:
    EquilibriumStrike(Champion* owner) : Spell(ID_EQUILIBRIUMSTRIKE, owner, 0.25f, 0) {
        cooldown[0] = 8f;
        cooldown[1] = 8f;
        cooldown[2] = 8f;
        cooldown[3] = 8f;
        cooldown[4] = 8f;

        cost[0] = 50;
        cost[1] = 55;
        cost[2] = 60;
        cost[3] = 65;
        cost[4] = 70;

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