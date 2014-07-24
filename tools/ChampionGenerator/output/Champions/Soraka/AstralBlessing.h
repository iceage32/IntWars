#ifndef _SPELL_ASTRALBLESSING_H
#define _SPELL_ASTRALBLESSING_H

#include "Spell.h"

#define ID_ASTRALBLESSING 0x00000000

class AstralBlessing : public Spell {
    private:
    float damage[5];

    public:
    AstralBlessing(Champion* owner) : Spell(ID_ASTRALBLESSING, owner, 0.25f, 0) {
        cooldown[0] = 20.0f;
        cooldown[1] = 20.0f;
        cooldown[2] = 20.0f;
        cooldown[3] = 20.0f;
        cooldown[4] = 20.0f;

        cost[0] = 80;
        cost[1] = 100;
        cost[2] = 120;
        cost[3] = 140;
        cost[4] = 160;

        damage[0] = 70;
        damage[1] = 70;
        damage[2] = 70;
        damage[3] = 70;
        damage[4] = 70;
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