#ifndef _SPELL_EYEOFDESTRUCTION_H
#define _SPELL_EYEOFDESTRUCTION_H

#include "Spell.h"

#define ID_EYEOFDESTRUCTION 0x00000000

class EyeofDestruction : public Spell {
    private:
    float damage[5];

    public:
    EyeofDestruction(Champion* owner) : Spell(ID_EYEOFDESTRUCTION, owner, 0.25f, 0) {
        cooldown[0] = 1f;
        cooldown[1] = 1f;
        cooldown[2] = 1f;
        cooldown[3] = 1f;
        cooldown[4] = 1f;

        cost[0] = 70;
        cost[1] = 80;
        cost[2] = 90;
        cost[3] = 100;
        cost[4] = 110;

        damage[0] = 60;
        damage[1] = 60;
        damage[2] = 60;
        damage[3] = 60;
        damage[4] = 60;
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