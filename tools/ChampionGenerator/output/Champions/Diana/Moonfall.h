#ifndef _SPELL_MOONFALL_H
#define _SPELL_MOONFALL_H

#include "Spell.h"

#define ID_MOONFALL 0x00000000

class Moonfall : public Spell {
    private:
    float damage[5];

    public:
    Moonfall(Champion* owner) : Spell(ID_MOONFALL, owner, 0.25f, 0) {
        cooldown[0] = 26.0f;
        cooldown[1] = 24.0f;
        cooldown[2] = 22.0f;
        cooldown[3] = 20.0f;
        cooldown[4] = 18.0f;

        cost[0] = 70;
        cost[1] = 70;
        cost[2] = 70;
        cost[3] = 70;
        cost[4] = 70;

        damage[0] = 35;
        damage[1] = 35;
        damage[2] = 35;
        damage[3] = 35;
        damage[4] = 35;
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