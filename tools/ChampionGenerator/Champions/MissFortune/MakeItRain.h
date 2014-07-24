#ifndef _SPELL_MAKEITRAIN_H
#define _SPELL_MAKEITRAIN_H

#include "Spell.h"

#define ID_MAKEITRAIN 0x00000000

class MakeItRain : public Spell {
    private:
    float damage[5];

    public:
    MakeItRain(Champion* owner) : Spell(ID_MAKEITRAIN, owner, 0.25f, 0) {
        cooldown[0] = 14f;
        cooldown[1] = 13f;
        cooldown[2] = 12f;
        cooldown[3] = 11f;
        cooldown[4] = 10f;

        cost[0] = 80;
        cost[1] = 80;
        cost[2] = 80;
        cost[3] = 80;
        cost[4] = 80;

        damage[0] = 90;
        damage[1] = 90;
        damage[2] = 90;
        damage[3] = 90;
        damage[4] = 90;
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