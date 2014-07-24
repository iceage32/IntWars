#ifndef _SPELL_DUSKBRINGER_H
#define _SPELL_DUSKBRINGER_H

#include "Spell.h"

#define ID_DUSKBRINGER 0x00000000

class Duskbringer : public Spell {
    private:
    float damage[5];

    public:
    Duskbringer(Champion* owner) : Spell(ID_DUSKBRINGER, owner, 0.25f, 0) {
        cooldown[0] = 10.0f;
        cooldown[1] = 10.0f;
        cooldown[2] = 10.0f;
        cooldown[3] = 10.0f;
        cooldown[4] = 10.0f;

        cost[0] = 60;
        cost[1] = 65;
        cost[2] = 70;
        cost[3] = 75;
        cost[4] = 80;

        damage[0] = 15;
        damage[1] = 15;
        damage[2] = 15;
        damage[3] = 15;
        damage[4] = 15;
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