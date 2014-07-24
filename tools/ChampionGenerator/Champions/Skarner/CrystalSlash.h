#ifndef _SPELL_CRYSTALSLASH_H
#define _SPELL_CRYSTALSLASH_H

#include "Spell.h"

#define ID_CRYSTALSLASH 0x00000000

class CrystalSlash : public Spell {
    private:
    float damage[5];

    public:
    CrystalSlash(Champion* owner) : Spell(ID_CRYSTALSLASH, owner, 0.25f, 0) {
        cooldown[0] = 3.5f;
        cooldown[1] = 3.5f;
        cooldown[2] = 3.5f;
        cooldown[3] = 3.5f;
        cooldown[4] = 3.5f;

        cost[0] = 16;
        cost[1] = 18;
        cost[2] = 20;
        cost[3] = 22;
        cost[4] = 24;

        damage[0] = 18;
        damage[1] = 18;
        damage[2] = 18;
        damage[3] = 18;
        damage[4] = 18;
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