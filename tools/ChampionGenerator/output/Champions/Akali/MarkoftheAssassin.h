#ifndef _SPELL_MARKOFTHEASSASSIN_H
#define _SPELL_MARKOFTHEASSASSIN_H

#include "Spell.h"

#define ID_MARKOFTHEASSASSIN 0x00000000

class MarkoftheAssassin : public Spell {
    private:
    float damage[5];

    public:
    MarkoftheAssassin(Champion* owner) : Spell(ID_MARKOFTHEASSASSIN, owner, 0.25f, 0) {
        cooldown[0] = 6.0f;
        cooldown[1] = 5.5f;
        cooldown[2] = 5.0f;
        cooldown[3] = 4.5f;
        cooldown[4] = 4.0f;

        cost[0] = 60;
        cost[1] = 60;
        cost[2] = 60;
        cost[3] = 60;
        cost[4] = 60;

        damage[0] = 45;
        damage[1] = 45;
        damage[2] = 45;
        damage[3] = 45;
        damage[4] = 45;
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