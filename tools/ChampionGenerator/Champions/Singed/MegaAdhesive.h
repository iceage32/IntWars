#ifndef _SPELL_MEGAADHESIVE_H
#define _SPELL_MEGAADHESIVE_H

#include "Spell.h"

#define ID_MEGAADHESIVE 0x00000000

class MegaAdhesive : public Spell {
    private:
    float damage[5];

    public:
    MegaAdhesive(Champion* owner) : Spell(ID_MEGAADHESIVE, owner, 0.25f, 0) {
        cooldown[0] = 14f;
        cooldown[1] = 14f;
        cooldown[2] = 14f;
        cooldown[3] = 14f;
        cooldown[4] = 14f;

        cost[0] = 70;
        cost[1] = 80;
        cost[2] = 90;
        cost[3] = 100;
        cost[4] = 110;

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