#ifndef _SPELL_JUDGMENT_H
#define _SPELL_JUDGMENT_H

#include "Spell.h"

#define ID_JUDGMENT 0x00000000

class Judgment : public Spell {
    private:
    float damage[5];

    public:
    Judgment(Champion* owner) : Spell(ID_JUDGMENT, owner, 0.25f, 0) {
        cooldown[0] = 13f;
        cooldown[1] = 12f;
        cooldown[2] = 11f;
        cooldown[3] = 10f;
        cooldown[4] = 9f;

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