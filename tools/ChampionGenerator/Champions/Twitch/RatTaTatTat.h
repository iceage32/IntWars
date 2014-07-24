#ifndef _SPELL_RATTATATTAT_H
#define _SPELL_RATTATATTAT_H

#include "Spell.h"

#define ID_RATTATATTAT 0x00000000

class RatTaTatTat : public Spell {
    private:
    float damage[5];

    public:
    RatTaTatTat(Champion* owner) : Spell(ID_RATTATATTAT, owner, 0.25f, 0) {
        cooldown[0] = 120f;
        cooldown[1] = 110f;
        cooldown[2] = 100f;
        cooldown[3] = 0f;
        cooldown[4] = 0f;

        cost[0] = 100;
        cost[1] = 125;
        cost[2] = 150;
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