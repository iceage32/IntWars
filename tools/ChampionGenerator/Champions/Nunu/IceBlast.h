#ifndef _SPELL_ICEBLAST_H
#define _SPELL_ICEBLAST_H

#include "Spell.h"

#define ID_ICEBLAST 0x00000000

class IceBlast : public Spell {
    private:
    float damage[5];

    public:
    IceBlast(Champion* owner) : Spell(ID_ICEBLAST, owner, 0.25f, 0) {
        cooldown[0] = 6f;
        cooldown[1] = 6f;
        cooldown[2] = 6f;
        cooldown[3] = 6f;
        cooldown[4] = 6f;

        cost[0] = 75;
        cost[1] = 85;
        cost[2] = 95;
        cost[3] = 105;
        cost[4] = 115;

        damage[0] = 85;
        damage[1] = 85;
        damage[2] = 85;
        damage[3] = 85;
        damage[4] = 85;
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