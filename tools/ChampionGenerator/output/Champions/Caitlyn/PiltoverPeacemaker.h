#ifndef _SPELL_PILTOVERPEACEMAKER_H
#define _SPELL_PILTOVERPEACEMAKER_H

#include "Spell.h"

#define ID_PILTOVERPEACEMAKER 0x00000000

class PiltoverPeacemaker : public Spell {
    private:
    float damage[5];

    public:
    PiltoverPeacemaker(Champion* owner) : Spell(ID_PILTOVERPEACEMAKER, owner, 0.25f, 0) {
        cooldown[0] = 10.0f;
        cooldown[1] = 9.0f;
        cooldown[2] = 8.0f;
        cooldown[3] = 7.0f;
        cooldown[4] = 6.0f;

        cost[0] = 50;
        cost[1] = 60;
        cost[2] = 70;
        cost[3] = 80;
        cost[4] = 90;

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