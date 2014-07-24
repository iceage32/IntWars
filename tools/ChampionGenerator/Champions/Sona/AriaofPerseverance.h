#ifndef _SPELL_ARIAOFPERSEVERANCE_H
#define _SPELL_ARIAOFPERSEVERANCE_H

#include "Spell.h"

#define ID_ARIAOFPERSEVERANCE 0x00000000

class AriaofPerseverance : public Spell {
    private:
    float damage[5];

    public:
    AriaofPerseverance(Champion* owner) : Spell(ID_ARIAOFPERSEVERANCE, owner, 0.25f, 0) {
        cooldown[0] = 7f;
        cooldown[1] = 7f;
        cooldown[2] = 7f;
        cooldown[3] = 7f;
        cooldown[4] = 7f;

        cost[0] = 60;
        cost[1] = 65;
        cost[2] = 70;
        cost[3] = 75;
        cost[4] = 80;

        damage[0] = 6;
        damage[1] = 6;
        damage[2] = 6;
        damage[3] = 6;
        damage[4] = 6;
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