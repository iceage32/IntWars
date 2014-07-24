#ifndef _SPELL_PULVERIZE_H
#define _SPELL_PULVERIZE_H

#include "Spell.h"

#define ID_PULVERIZE 0x00000000

class Pulverize : public Spell {
    private:
    float damage[5];

    public:
    Pulverize(Champion* owner) : Spell(ID_PULVERIZE, owner, 0.25f, 0) {
        cooldown[0] = 17f;
        cooldown[1] = 16f;
        cooldown[2] = 15f;
        cooldown[3] = 14f;
        cooldown[4] = 13f;

        cost[0] = 65;
        cost[1] = 70;
        cost[2] = 75;
        cost[3] = 80;
        cost[4] = 85;

        damage[0] = 70;
        damage[1] = 70;
        damage[2] = 70;
        damage[3] = 70;
        damage[4] = 70;
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