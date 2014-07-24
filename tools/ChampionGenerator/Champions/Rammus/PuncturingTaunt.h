#ifndef _SPELL_PUNCTURINGTAUNT_H
#define _SPELL_PUNCTURINGTAUNT_H

#include "Spell.h"

#define ID_PUNCTURINGTAUNT 0x00000000

class PuncturingTaunt : public Spell {
    private:
    float damage[5];

    public:
    PuncturingTaunt(Champion* owner) : Spell(ID_PUNCTURINGTAUNT, owner, 0.25f, 0) {
        cooldown[0] = 12f;
        cooldown[1] = 12f;
        cooldown[2] = 12f;
        cooldown[3] = 12f;
        cooldown[4] = 12f;

        cost[0] = 50;
        cost[1] = 50;
        cost[2] = 50;
        cost[3] = 50;
        cost[4] = 50;

        damage[0] = 1.25;
        damage[1] = 1.25;
        damage[2] = 1.25;
        damage[3] = 1.25;
        damage[4] = 1.25;
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