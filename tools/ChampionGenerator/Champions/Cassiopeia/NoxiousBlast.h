#ifndef _SPELL_NOXIOUSBLAST_H
#define _SPELL_NOXIOUSBLAST_H

#include "Spell.h"

#define ID_NOXIOUSBLAST 0x00000000

class NoxiousBlast : public Spell {
    private:
    float damage[5];

    public:
    NoxiousBlast(Champion* owner) : Spell(ID_NOXIOUSBLAST, owner, 0.25f, 0) {
        cooldown[0] = 3f;
        cooldown[1] = 3f;
        cooldown[2] = 3f;
        cooldown[3] = 3f;
        cooldown[4] = 3f;

        cost[0] = 35;
        cost[1] = 45;
        cost[2] = 55;
        cost[3] = 65;
        cost[4] = 75;

        damage[0] = 75;
        damage[1] = 75;
        damage[2] = 75;
        damage[3] = 75;
        damage[4] = 75;
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