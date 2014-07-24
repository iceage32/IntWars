#ifndef _SPELL_PILLAROFICE_H
#define _SPELL_PILLAROFICE_H

#include "Spell.h"

#define ID_PILLAROFICE 0x00000000

class PillarofIce : public Spell {
    private:
    float damage[5];

    public:
    PillarofIce(Champion* owner) : Spell(ID_PILLAROFICE, owner, 0.25f, 0) {
        cooldown[0] = 23f;
        cooldown[1] = 20f;
        cooldown[2] = 17f;
        cooldown[3] = 14f;
        cooldown[4] = 11f;

        cost[0] = 60;
        cost[1] = 60;
        cost[2] = 60;
        cost[3] = 60;
        cost[4] = 60;

        damage[0] = 6;
        damage[1] = 6;
        damage[2] = 6;
        damage[3] = 6;
        damage[4] = 6;
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