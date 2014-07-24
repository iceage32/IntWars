#ifndef _SPELL_THEEQUALIZER_H
#define _SPELL_THEEQUALIZER_H

#include "Spell.h"

#define ID_THEEQUALIZER 0x00000000

class TheEqualizer : public Spell {
    private:
    float damage[5];

    public:
    TheEqualizer(Champion* owner) : Spell(ID_THEEQUALIZER, owner, 0.25f, 0) {
        cooldown[0] = 105f;
        cooldown[1] = 90f;
        cooldown[2] = 75f;
        cooldown[3] = 0f;
        cooldown[4] = 0f;

        cost[0] = 0;
        cost[1] = 0;
        cost[2] = 0;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 130;
        damage[1] = 130;
        damage[2] = 130;
        damage[3] = 130;
        damage[4] = 130;
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