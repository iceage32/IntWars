#ifndef _SPELL_VALOR_H
#define _SPELL_VALOR_H

#include "Spell.h"

#define ID_VALOR 0x00000000

class Valor : public Spell {
    private:
    float damage[5];

    public:
    Valor(Champion* owner) : Spell(ID_VALOR, owner, 0.25f, 0) {
        cooldown[0] = 10.0f;
        cooldown[1] = 9.0f;
        cooldown[2] = 8.0f;
        cooldown[3] = 7.0f;
        cooldown[4] = 6.0f;

        cost[0] = 0;
        cost[1] = 0;
        cost[2] = 0;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 90;
        damage[1] = 90;
        damage[2] = 90;
        damage[3] = 90;
        damage[4] = 90;
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