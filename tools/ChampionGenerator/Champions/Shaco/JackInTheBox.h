#ifndef _SPELL_JACKINTHEBOX_H
#define _SPELL_JACKINTHEBOX_H

#include "Spell.h"

#define ID_JACKINTHEBOX 0x00000000

class JackInTheBox : public Spell {
    private:
    float damage[5];

    public:
    JackInTheBox(Champion* owner) : Spell(ID_JACKINTHEBOX, owner, 0.25f, 0) {
        cooldown[0] = 0f;
        cooldown[1] = 0f;
        cooldown[2] = 0f;
        cooldown[3] = 0f;
        cooldown[4] = 0f;

        cost[0] = 50;
        cost[1] = 55;
        cost[2] = 60;
        cost[3] = 65;
        cost[4] = 70;

        damage[0] = 35;
        damage[1] = 35;
        damage[2] = 35;
        damage[3] = 35;
        damage[4] = 35;
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