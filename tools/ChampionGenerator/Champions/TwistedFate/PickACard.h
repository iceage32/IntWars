#ifndef _SPELL_PICKACARD_H
#define _SPELL_PICKACARD_H

#include "Spell.h"

#define ID_PICKACARD 0x00000000

class PickACard : public Spell {
    private:
    float damage[5];

    public:
    PickACard(Champion* owner) : Spell(ID_PICKACARD, owner, 0.25f, 0) {
        cooldown[0] = 6f;
        cooldown[1] = 6f;
        cooldown[2] = 6f;
        cooldown[3] = 6f;
        cooldown[4] = 6f;

        cost[0] = 40;
        cost[1] = 55;
        cost[2] = 70;
        cost[3] = 85;
        cost[4] = 100;

        damage[0] = 40;
        damage[1] = 40;
        damage[2] = 40;
        damage[3] = 40;
        damage[4] = 40;
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