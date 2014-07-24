#ifndef _SPELL_UNSPEAKABLEHORROR_H
#define _SPELL_UNSPEAKABLEHORROR_H

#include "Spell.h"

#define ID_UNSPEAKABLEHORROR 0x00000000

class UnspeakableHorror : public Spell {
    private:
    float damage[5];

    public:
    UnspeakableHorror(Champion* owner) : Spell(ID_UNSPEAKABLEHORROR, owner, 0.25f, 0) {
        cooldown[0] = 15f;
        cooldown[1] = 14f;
        cooldown[2] = 13f;
        cooldown[3] = 12f;
        cooldown[4] = 11f;

        cost[0] = 60;
        cost[1] = 65;
        cost[2] = 70;
        cost[3] = 75;
        cost[4] = 80;

        damage[0] = 50;
        damage[1] = 50;
        damage[2] = 50;
        damage[3] = 50;
        damage[4] = 50;
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