#ifndef _SPELL_ELECTRICALSURGE_H
#define _SPELL_ELECTRICALSURGE_H

#include "Spell.h"

#define ID_ELECTRICALSURGE 0x00000000

class ElectricalSurge : public Spell {
    private:
    float damage[5];

    public:
    ElectricalSurge(Champion* owner) : Spell(ID_ELECTRICALSURGE, owner, 0.25f, 0) {
        cooldown[0] = 14f;
        cooldown[1] = 12f;
        cooldown[2] = 10f;
        cooldown[3] = 8f;
        cooldown[4] = 6f;

        cost[0] = 45;
        cost[1] = 45;
        cost[2] = 45;
        cost[3] = 45;
        cost[4] = 45;

        damage[0] = 65;
        damage[1] = 65;
        damage[2] = 65;
        damage[3] = 65;
        damage[4] = 65;
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