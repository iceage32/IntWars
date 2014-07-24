#ifndef _SPELL_BUSTERSHOT_H
#define _SPELL_BUSTERSHOT_H

#include "Spell.h"

#define ID_BUSTERSHOT 0x00000000

class BusterShot : public Spell {
    private:
    float damage[5];

    public:
    BusterShot(Champion* owner) : Spell(ID_BUSTERSHOT, owner, 0.25f, 0) {
        cooldown[0] = 60f;
        cooldown[1] = 60f;
        cooldown[2] = 60f;
        cooldown[3] = 0f;
        cooldown[4] = 0f;

        cost[0] = 100;
        cost[1] = 100;
        cost[2] = 100;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 300;
        damage[1] = 300;
        damage[2] = 300;
        damage[3] = 300;
        damage[4] = 300;
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