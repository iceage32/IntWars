#ifndef _SPELL_HYMNOFVALOR_H
#define _SPELL_HYMNOFVALOR_H

#include "Spell.h"

#define ID_HYMNOFVALOR 0x00000000

class HymnofValor : public Spell {
    private:
    float damage[5];

    public:
    HymnofValor(Champion* owner) : Spell(ID_HYMNOFVALOR, owner, 0.25f, 0) {
        cooldown[0] = 7.0f;
        cooldown[1] = 7.0f;
        cooldown[2] = 7.0f;
        cooldown[3] = 7.0f;
        cooldown[4] = 7.0f;

        cost[0] = 45;
        cost[1] = 50;
        cost[2] = 55;
        cost[3] = 60;
        cost[4] = 65;

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