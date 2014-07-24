#ifndef _SPELL_TASTETHEIRFEAR_H
#define _SPELL_TASTETHEIRFEAR_H

#include "Spell.h"

#define ID_TASTETHEIRFEAR 0x00000000

class TasteTheirFear : public Spell {
    private:
    float damage[5];

    public:
    TasteTheirFear(Champion* owner) : Spell(ID_TASTETHEIRFEAR, owner, 0.25f, 0) {
        cooldown[0] = 3.5f;
        cooldown[1] = 3.5f;
        cooldown[2] = 3.5f;
        cooldown[3] = 3.5f;
        cooldown[4] = 3.5f;

        cost[0] = 25;
        cost[1] = 25;
        cost[2] = 25;
        cost[3] = 25;
        cost[4] = 25;

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