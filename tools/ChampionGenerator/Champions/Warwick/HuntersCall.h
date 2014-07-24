#ifndef _SPELL_HUNTERSCALL_H
#define _SPELL_HUNTERSCALL_H

#include "Spell.h"

#define ID_HUNTERSCALL 0x00000000

class HuntersCall : public Spell {
    private:
    float damage[5];

    public:
    HuntersCall(Champion* owner) : Spell(ID_HUNTERSCALL, owner, 0.25f, 0) {
        cooldown[0] = 24f;
        cooldown[1] = 22f;
        cooldown[2] = 20f;
        cooldown[3] = 18f;
        cooldown[4] = 16f;

        cost[0] = 35;
        cost[1] = 35;
        cost[2] = 35;
        cost[3] = 35;
        cost[4] = 35;

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