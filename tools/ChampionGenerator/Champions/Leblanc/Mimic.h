#ifndef _SPELL_MIMIC_H
#define _SPELL_MIMIC_H

#include "Spell.h"

#define ID_MIMIC 0x00000000

class Mimic : public Spell {
    private:
    float damage[5];

    public:
    Mimic(Champion* owner) : Spell(ID_MIMIC, owner, 0.25f, 0) {
        cooldown[0] = 40.0f;
        cooldown[1] = 32.0f;
        cooldown[2] = 24.0f;
        cooldown[3] = 0.0f;
        cooldown[4] = 0.0f;

        cost[0] = 0;
        cost[1] = 0;
        cost[2] = 0;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 20;
        damage[1] = 20;
        damage[2] = 20;
        damage[3] = 20;
        damage[4] = 20;
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