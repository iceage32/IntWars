#ifndef _SPELL_DARKPASSAGE_H
#define _SPELL_DARKPASSAGE_H

#include "Spell.h"

#define ID_DARKPASSAGE 0x00000000

class DarkPassage : public Spell {
    private:
    float damage[5];

    public:
    DarkPassage(Champion* owner) : Spell(ID_DARKPASSAGE, owner, 0.25f, 0) {
        cooldown[0] = 22.0f;
        cooldown[1] = 20.5f;
        cooldown[2] = 19.0f;
        cooldown[3] = 17.5f;
        cooldown[4] = 16.0f;

        cost[0] = 50;
        cost[1] = 55;
        cost[2] = 60;
        cost[3] = 65;
        cost[4] = 70;

        damage[0] = 60;
        damage[1] = 60;
        damage[2] = 60;
        damage[3] = 60;
        damage[4] = 60;
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