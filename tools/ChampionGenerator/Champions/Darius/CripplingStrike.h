#ifndef _SPELL_CRIPPLINGSTRIKE_H
#define _SPELL_CRIPPLINGSTRIKE_H

#include "Spell.h"

#define ID_CRIPPLINGSTRIKE 0x00000000

class CripplingStrike : public Spell {
    private:
    float damage[5];

    public:
    CripplingStrike(Champion* owner) : Spell(ID_CRIPPLINGSTRIKE, owner, 0.25f, 0) {
        cooldown[0] = 8.0f;
        cooldown[1] = 8.0f;
        cooldown[2] = 8.0f;
        cooldown[3] = 8.0f;
        cooldown[4] = 8.0f;

        cost[0] = 30;
        cost[1] = 35;
        cost[2] = 40;
        cost[3] = 45;
        cost[4] = 50;

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