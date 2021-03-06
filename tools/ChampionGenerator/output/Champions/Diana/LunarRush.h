#ifndef _SPELL_LUNARRUSH_H
#define _SPELL_LUNARRUSH_H

#include "Spell.h"

#define ID_LUNARRUSH 0x00000000

class LunarRush : public Spell {
    private:
    float damage[5];

    public:
    LunarRush(Champion* owner) : Spell(ID_LUNARRUSH, owner, 0.25f, 0) {
        cooldown[0] = 25.0f;
        cooldown[1] = 20.0f;
        cooldown[2] = 15.0f;
        cooldown[3] = 0.0f;
        cooldown[4] = 0.0f;

        cost[0] = 50;
        cost[1] = 65;
        cost[2] = 80;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 4;
        damage[1] = 4;
        damage[2] = 4;
        damage[3] = 4;
        damage[4] = 4;
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