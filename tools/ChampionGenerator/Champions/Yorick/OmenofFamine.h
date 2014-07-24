#ifndef _SPELL_OMENOFFAMINE_H
#define _SPELL_OMENOFFAMINE_H

#include "Spell.h"

#define ID_OMENOFFAMINE 0x00000000

class OmenofFamine : public Spell {
    private:
    float damage[5];

    public:
    OmenofFamine(Champion* owner) : Spell(ID_OMENOFFAMINE, owner, 0.25f, 0) {
        cooldown[0] = 10f;
        cooldown[1] = 9f;
        cooldown[2] = 8f;
        cooldown[3] = 7f;
        cooldown[4] = 6f;

        cost[0] = 55;
        cost[1] = 60;
        cost[2] = 65;
        cost[3] = 70;
        cost[4] = 75;

        damage[0] = 55;
        damage[1] = 55;
        damage[2] = 55;
        damage[3] = 55;
        damage[4] = 55;
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