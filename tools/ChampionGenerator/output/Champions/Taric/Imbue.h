#ifndef _SPELL_IMBUE_H
#define _SPELL_IMBUE_H

#include "Spell.h"

#define ID_IMBUE 0x00000000

class Imbue : public Spell {
    private:
    float damage[5];

    public:
    Imbue(Champion* owner) : Spell(ID_IMBUE, owner, 0.25f, 0) {
        cooldown[0] = 18.0f;
        cooldown[1] = 17.0f;
        cooldown[2] = 16.0f;
        cooldown[3] = 15.0f;
        cooldown[4] = 14.0f;

        cost[0] = 60;
        cost[1] = 80;
        cost[2] = 100;
        cost[3] = 120;
        cost[4] = 140;

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