#ifndef _SPELL_DARKMATTER_H
#define _SPELL_DARKMATTER_H

#include "Spell.h"

#define ID_DARKMATTER 0x00000000

class DarkMatter : public Spell {
    private:
    float damage[5];

    public:
    DarkMatter(Champion* owner) : Spell(ID_DARKMATTER, owner, 0.25f, 0) {
        cooldown[0] = 10.0f;
        cooldown[1] = 10.0f;
        cooldown[2] = 10.0f;
        cooldown[3] = 10.0f;
        cooldown[4] = 10.0f;

        cost[0] = 70;
        cost[1] = 80;
        cost[2] = 90;
        cost[3] = 100;
        cost[4] = 110;

        damage[0] = 120;
        damage[1] = 120;
        damage[2] = 120;
        damage[3] = 120;
        damage[4] = 120;
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