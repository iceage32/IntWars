#ifndef _SPELL_PILLAROFFLAME_H
#define _SPELL_PILLAROFFLAME_H

#include "Spell.h"

#define ID_PILLAROFFLAME 0x00000000

class PillarofFlame : public Spell {
    private:
    float damage[5];

    public:
    PillarofFlame(Champion* owner) : Spell(ID_PILLAROFFLAME, owner, 0.25f, 0) {
        cooldown[0] = 10f;
        cooldown[1] = 10f;
        cooldown[2] = 10f;
        cooldown[3] = 10f;
        cooldown[4] = 10f;

        cost[0] = 70;
        cost[1] = 75;
        cost[2] = 80;
        cost[3] = 85;
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