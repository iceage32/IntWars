#ifndef _SPELL_VALKYRIE_H
#define _SPELL_VALKYRIE_H

#include "Spell.h"

#define ID_VALKYRIE 0x00000000

class Valkyrie : public Spell {
    private:
    float damage[5];

    public:
    Valkyrie(Champion* owner) : Spell(ID_VALKYRIE, owner, 0.25f, 0) {
        cooldown[0] = 26.0f;
        cooldown[1] = 23.0f;
        cooldown[2] = 20.0f;
        cooldown[3] = 17.0f;
        cooldown[4] = 14.0f;

        cost[0] = 50;
        cost[1] = 50;
        cost[2] = 50;
        cost[3] = 50;
        cost[4] = 50;

        damage[0] = 60;
        damage[1] = 60;
        damage[2] = 60;
        damage[3] = 60;
        damage[4] = 60;
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