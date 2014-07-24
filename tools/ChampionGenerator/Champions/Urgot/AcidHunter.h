#ifndef _SPELL_ACIDHUNTER_H
#define _SPELL_ACIDHUNTER_H

#include "Spell.h"

#define ID_ACIDHUNTER 0x00000000

class AcidHunter : public Spell {
    private:
    float damage[5];

    public:
    AcidHunter(Champion* owner) : Spell(ID_ACIDHUNTER, owner, 0.25f, 0) {
        cooldown[0] = 2.0f;
        cooldown[1] = 2.0f;
        cooldown[2] = 2.0f;
        cooldown[3] = 2.0f;
        cooldown[4] = 2.0f;

        cost[0] = 40;
        cost[1] = 40;
        cost[2] = 40;
        cost[3] = 40;
        cost[4] = 40;

        damage[0] = 10;
        damage[1] = 10;
        damage[2] = 10;
        damage[3] = 10;
        damage[4] = 10;
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