#ifndef _SPELL_FINALHOUR_H
#define _SPELL_FINALHOUR_H

#include "Spell.h"

#define ID_FINALHOUR 0x00000000

class FinalHour : public Spell {
    private:
    float damage[5];

    public:
    FinalHour(Champion* owner) : Spell(ID_FINALHOUR, owner, 0.25f, 0) {
        cooldown[0] = 100.0f;
        cooldown[1] = 85.0f;
        cooldown[2] = 70.0f;
        cooldown[3] = 0.0f;
        cooldown[4] = 0.0f;

        cost[0] = 80;
        cost[1] = 80;
        cost[2] = 80;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 25;
        damage[1] = 25;
        damage[2] = 25;
        damage[3] = 25;
        damage[4] = 25;
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