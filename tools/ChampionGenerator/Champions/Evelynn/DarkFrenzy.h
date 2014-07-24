#ifndef _SPELL_DARKFRENZY_H
#define _SPELL_DARKFRENZY_H

#include "Spell.h"

#define ID_DARKFRENZY 0x00000000

class DarkFrenzy : public Spell {
    private:
    float damage[5];

    public:
    DarkFrenzy(Champion* owner) : Spell(ID_DARKFRENZY, owner, 0.25f, 0) {
        cooldown[0] = 15f;
        cooldown[1] = 15f;
        cooldown[2] = 15f;
        cooldown[3] = 15f;
        cooldown[4] = 15f;

        cost[0] = 0;
        cost[1] = 0;
        cost[2] = 0;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 4;
        damage[1] = 4;
        damage[2] = 4;
        damage[3] = 4;
        damage[4] = 4;
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