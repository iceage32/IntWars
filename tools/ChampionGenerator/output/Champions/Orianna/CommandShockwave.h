#ifndef _SPELL_COMMANDSHOCKWAVE_H
#define _SPELL_COMMANDSHOCKWAVE_H

#include "Spell.h"

#define ID_COMMANDSHOCKWAVE 0x00000000

class CommandShockwave : public Spell {
    private:
    float damage[5];

    public:
    CommandShockwave(Champion* owner) : Spell(ID_COMMANDSHOCKWAVE, owner, 0.25f, 0) {
        cooldown[0] = 120.0f;
        cooldown[1] = 105.0f;
        cooldown[2] = 90.0f;
        cooldown[3] = 0.0f;
        cooldown[4] = 0.0f;

        cost[0] = 100;
        cost[1] = 125;
        cost[2] = 150;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 150;
        damage[1] = 150;
        damage[2] = 150;
        damage[3] = 150;
        damage[4] = 150;
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