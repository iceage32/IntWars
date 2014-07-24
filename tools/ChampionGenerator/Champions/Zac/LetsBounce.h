#ifndef _SPELL_LETSBOUNCE_H
#define _SPELL_LETSBOUNCE_H

#include "Spell.h"

#define ID_LETSBOUNCE 0x00000000

class LetsBounce : public Spell {
    private:
    float damage[5];

    public:
    LetsBounce(Champion* owner) : Spell(ID_LETSBOUNCE, owner, 0.25f, 0) {
        cooldown[0] = 130f;
        cooldown[1] = 115f;
        cooldown[2] = 100f;
        cooldown[3] = 0f;
        cooldown[4] = 0f;

        cost[0] = 0;
        cost[1] = 0;
        cost[2] = 0;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 140;
        damage[1] = 140;
        damage[2] = 140;
        damage[3] = 140;
        damage[4] = 140;
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