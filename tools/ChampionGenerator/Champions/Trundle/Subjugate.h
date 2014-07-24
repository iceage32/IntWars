#ifndef _SPELL_SUBJUGATE_H
#define _SPELL_SUBJUGATE_H

#include "Spell.h"

#define ID_SUBJUGATE 0x00000000

class Subjugate : public Spell {
    private:
    float damage[5];

    public:
    Subjugate(Champion* owner) : Spell(ID_SUBJUGATE, owner, 0.25f, 0) {
        cooldown[0] = 80f;
        cooldown[1] = 70f;
        cooldown[2] = 60f;
        cooldown[3] = 0f;
        cooldown[4] = 0f;

        cost[0] = 75;
        cost[1] = 75;
        cost[2] = 75;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 20;
        damage[1] = 20;
        damage[2] = 20;
        damage[3] = 20;
        damage[4] = 20;
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