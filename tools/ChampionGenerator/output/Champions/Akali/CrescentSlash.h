#ifndef _SPELL_CRESCENTSLASH_H
#define _SPELL_CRESCENTSLASH_H

#include "Spell.h"

#define ID_CRESCENTSLASH 0x00000000

class CrescentSlash : public Spell {
    private:
    float damage[5];

    public:
    CrescentSlash(Champion* owner) : Spell(ID_CRESCENTSLASH, owner, 0.25f, 0) {
        cooldown[0] = 7.0f;
        cooldown[1] = 6.0f;
        cooldown[2] = 5.0f;
        cooldown[3] = 4.0f;
        cooldown[4] = 3.0f;

        cost[0] = 60;
        cost[1] = 55;
        cost[2] = 50;
        cost[3] = 45;
        cost[4] = 40;

        damage[0] = 30;
        damage[1] = 30;
        damage[2] = 30;
        damage[3] = 30;
        damage[4] = 30;
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