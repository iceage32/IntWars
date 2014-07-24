#ifndef _SPELL_PIERCINGLIGHT_H
#define _SPELL_PIERCINGLIGHT_H

#include "Spell.h"

#define ID_PIERCINGLIGHT 0x00000000

class PiercingLight : public Spell {
    private:
    float damage[5];

    public:
    PiercingLight(Champion* owner) : Spell(ID_PIERCINGLIGHT, owner, 0.25f, 0) {
        cooldown[0] = 9.0f;
        cooldown[1] = 8.0f;
        cooldown[2] = 7.0f;
        cooldown[3] = 6.0f;
        cooldown[4] = 5.0f;

        cost[0] = 50;
        cost[1] = 55;
        cost[2] = 60;
        cost[3] = 65;
        cost[4] = 70;

        damage[0] = 80;
        damage[1] = 80;
        damage[2] = 80;
        damage[3] = 80;
        damage[4] = 80;
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