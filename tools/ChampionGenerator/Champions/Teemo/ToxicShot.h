#ifndef _SPELL_TOXICSHOT_H
#define _SPELL_TOXICSHOT_H

#include "Spell.h"

#define ID_TOXICSHOT 0x00000000

class ToxicShot : public Spell {
    private:
    float damage[5];

    public:
    ToxicShot(Champion* owner) : Spell(ID_TOXICSHOT, owner, 0.25f, 0) {
        cooldown[0] = 8f;
        cooldown[1] = 8f;
        cooldown[2] = 8f;
        cooldown[3] = 8f;
        cooldown[4] = 8f;

        cost[0] = 30;
        cost[1] = 35;
        cost[2] = 40;
        cost[3] = 45;
        cost[4] = 50;

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