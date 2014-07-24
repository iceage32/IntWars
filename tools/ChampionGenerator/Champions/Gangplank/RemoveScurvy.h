#ifndef _SPELL_REMOVESCURVY_H
#define _SPELL_REMOVESCURVY_H

#include "Spell.h"

#define ID_REMOVESCURVY 0x00000000

class RemoveScurvy : public Spell {
    private:
    float damage[5];

    public:
    RemoveScurvy(Champion* owner) : Spell(ID_REMOVESCURVY, owner, 0.25f, 0) {
        cooldown[0] = 22f;
        cooldown[1] = 21f;
        cooldown[2] = 20f;
        cooldown[3] = 19f;
        cooldown[4] = 18f;

        cost[0] = 65;
        cost[1] = 65;
        cost[2] = 65;
        cost[3] = 65;
        cost[4] = 65;

        damage[0] = 80;
        damage[1] = 80;
        damage[2] = 80;
        damage[3] = 80;
        damage[4] = 80;
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