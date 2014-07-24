#ifndef _SPELL_TITANSWRATH_H
#define _SPELL_TITANSWRATH_H

#include "Spell.h"

#define ID_TITANSWRATH 0x00000000

class TitansWrath : public Spell {
    private:
    float damage[5];

    public:
    TitansWrath(Champion* owner) : Spell(ID_TITANSWRATH, owner, 0.25f, 0) {
        cooldown[0] = 18.0f;
        cooldown[1] = 18.0f;
        cooldown[2] = 18.0f;
        cooldown[3] = 18.0f;
        cooldown[4] = 18.0f;

        cost[0] = 80;
        cost[1] = 80;
        cost[2] = 80;
        cost[3] = 80;
        cost[4] = 80;

        damage[0] = 100;
        damage[1] = 100;
        damage[2] = 100;
        damage[3] = 100;
        damage[4] = 100;
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