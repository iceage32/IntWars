#ifndef _SPELL_HEARTSEEKERSTRIKE_H
#define _SPELL_HEARTSEEKERSTRIKE_H

#include "Spell.h"

#define ID_HEARTSEEKERSTRIKE 0x00000000

class HeartseekerStrike : public Spell {
    private:
    float damage[5];

    public:
    HeartseekerStrike(Champion* owner) : Spell(ID_HEARTSEEKERSTRIKE, owner, 0.25f, 0) {
        cooldown[0] = 10f;
        cooldown[1] = 9f;
        cooldown[2] = 8f;
        cooldown[3] = 7f;
        cooldown[4] = 6f;

        cost[0] = 45;
        cost[1] = 50;
        cost[2] = 55;
        cost[3] = 60;
        cost[4] = 65;

        damage[0] = 13;
        damage[1] = 13;
        damage[2] = 13;
        damage[3] = 13;
        damage[4] = 13;
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