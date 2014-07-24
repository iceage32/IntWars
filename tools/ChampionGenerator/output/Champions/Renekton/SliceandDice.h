#ifndef _SPELL_SLICEANDDICE_H
#define _SPELL_SLICEANDDICE_H

#include "Spell.h"

#define ID_SLICEANDDICE 0x00000000

class SliceandDice : public Spell {
    private:
    float damage[5];

    public:
    SliceandDice(Champion* owner) : Spell(ID_SLICEANDDICE, owner, 0.25f, 0) {
        cooldown[0] = 18.0f;
        cooldown[1] = 17.0f;
        cooldown[2] = 16.0f;
        cooldown[3] = 15.0f;
        cooldown[4] = 14.0f;

        cost[0] = 0;
        cost[1] = 0;
        cost[2] = 0;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 30;
        damage[1] = 30;
        damage[2] = 30;
        damage[3] = 30;
        damage[4] = 30;
    }

    /**
     * create the projectile here, and notify it to the map/game
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