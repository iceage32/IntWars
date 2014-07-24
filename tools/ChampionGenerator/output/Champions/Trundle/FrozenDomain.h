#ifndef _SPELL_FROZENDOMAIN_H
#define _SPELL_FROZENDOMAIN_H

#include "Spell.h"

#define ID_FROZENDOMAIN 0x00000000

class FrozenDomain : public Spell {
    private:
    float damage[5];

    public:
    FrozenDomain(Champion* owner) : Spell(ID_FROZENDOMAIN, owner, 0.25f, 0) {
        cooldown[0] = 15.0f;
        cooldown[1] = 15.0f;
        cooldown[2] = 15.0f;
        cooldown[3] = 15.0f;
        cooldown[4] = 15.0f;

        cost[0] = 60;
        cost[1] = 60;
        cost[2] = 60;
        cost[3] = 60;
        cost[4] = 60;

        damage[0] = 20;
        damage[1] = 20;
        damage[2] = 20;
        damage[3] = 20;
        damage[4] = 20;
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