#ifndef _SPELL_GOLDENAEGIS_H
#define _SPELL_GOLDENAEGIS_H

#include "Spell.h"

#define ID_GOLDENAEGIS 0x00000000

class GoldenAegis : public Spell {
    private:
    float damage[5];

    public:
    GoldenAegis(Champion* owner) : Spell(ID_GOLDENAEGIS, owner, 0.25f, 0) {
        cooldown[0] = 20.0f;
        cooldown[1] = 18.0f;
        cooldown[2] = 16.0f;
        cooldown[3] = 14.0f;
        cooldown[4] = 12.0f;

        cost[0] = 30;
        cost[1] = 30;
        cost[2] = 30;
        cost[3] = 30;
        cost[4] = 30;

        damage[0] = 50;
        damage[1] = 50;
        damage[2] = 50;
        damage[3] = 50;
        damage[4] = 50;
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