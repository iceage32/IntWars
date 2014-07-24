#ifndef _SPELL_VAULTBREAKER_H
#define _SPELL_VAULTBREAKER_H

#include "Spell.h"

#define ID_VAULTBREAKER 0x00000000

class VaultBreaker : public Spell {
    private:
    float damage[5];

    public:
    VaultBreaker(Champion* owner) : Spell(ID_VAULTBREAKER, owner, 0.25f, 0) {
        cooldown[0] = 18.0f;
        cooldown[1] = 15.5f;
        cooldown[2] = 13.0f;
        cooldown[3] = 10.5f;
        cooldown[4] = 8.0f;

        cost[0] = 50;
        cost[1] = 60;
        cost[2] = 70;
        cost[3] = 80;
        cost[4] = 90;

        damage[0] = 50;
        damage[1] = 50;
        damage[2] = 50;
        damage[3] = 50;
        damage[4] = 50;
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