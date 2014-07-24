#ifndef _SPELL_COMMANDPROTECT_H
#define _SPELL_COMMANDPROTECT_H

#include "Spell.h"

#define ID_COMMANDPROTECT 0x00000000

class CommandProtect : public Spell {
    private:
    float damage[5];

    public:
    CommandProtect(Champion* owner) : Spell(ID_COMMANDPROTECT, owner, 0.25f, 0) {
        cooldown[0] = 9f;
        cooldown[1] = 9f;
        cooldown[2] = 9f;
        cooldown[3] = 9f;
        cooldown[4] = 9f;

        cost[0] = 60;
        cost[1] = 60;
        cost[2] = 60;
        cost[3] = 60;
        cost[4] = 60;

        damage[0] = 80;
        damage[1] = 80;
        damage[2] = 80;
        damage[3] = 80;
        damage[4] = 80;
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