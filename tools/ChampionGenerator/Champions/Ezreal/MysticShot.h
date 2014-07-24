#ifndef _SPELL_MYSTICSHOT_H
#define _SPELL_MYSTICSHOT_H

#include "Spell.h"

#define ID_MYSTICSHOT 0x00000000

class MysticShot : public Spell {
    private:
    float damage[5];

    public:
    MysticShot(Champion* owner) : Spell(ID_MYSTICSHOT, owner, 0.25f, 0) {
        cooldown[0] = 6f;
        cooldown[1] = 5.5f;
        cooldown[2] = 5f;
        cooldown[3] = 4.5f;
        cooldown[4] = 4f;

        cost[0] = 28;
        cost[1] = 31;
        cost[2] = 34;
        cost[3] = 37;
        cost[4] = 40;

        damage[0] = 35;
        damage[1] = 35;
        damage[2] = 35;
        damage[3] = 35;
        damage[4] = 35;
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