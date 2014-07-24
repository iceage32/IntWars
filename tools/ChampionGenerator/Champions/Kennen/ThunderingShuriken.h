#ifndef _SPELL_THUNDERINGSHURIKEN_H
#define _SPELL_THUNDERINGSHURIKEN_H

#include "Spell.h"

#define ID_THUNDERINGSHURIKEN 0x00000000

class ThunderingShuriken : public Spell {
    private:
    float damage[5];

    public:
    ThunderingShuriken(Champion* owner) : Spell(ID_THUNDERINGSHURIKEN, owner, 0.25f, 0) {
        cooldown[0] = 8f;
        cooldown[1] = 7f;
        cooldown[2] = 6f;
        cooldown[3] = 5f;
        cooldown[4] = 4f;

        cost[0] = 65;
        cost[1] = 60;
        cost[2] = 55;
        cost[3] = 50;
        cost[4] = 45;

        damage[0] = 75;
        damage[1] = 75;
        damage[2] = 75;
        damage[3] = 75;
        damage[4] = 75;
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