#ifndef _SPELL_ETHEREALCHAINS_H
#define _SPELL_ETHEREALCHAINS_H

#include "Spell.h"

#define ID_ETHEREALCHAINS 0x00000000

class EtherealChains : public Spell {
    private:
    float damage[5];

    public:
    EtherealChains(Champion* owner) : Spell(ID_ETHEREALCHAINS, owner, 0.25f, 0) {
        cooldown[0] = 14.0f;
        cooldown[1] = 12.5f;
        cooldown[2] = 11.0f;
        cooldown[3] = 9.5f;
        cooldown[4] = 8.0f;

        cost[0] = 80;
        cost[1] = 80;
        cost[2] = 80;
        cost[3] = 80;
        cost[4] = 80;

        damage[0] = 40;
        damage[1] = 40;
        damage[2] = 40;
        damage[3] = 40;
        damage[4] = 40;
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