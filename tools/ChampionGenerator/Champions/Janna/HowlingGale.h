#ifndef _SPELL_HOWLINGGALE_H
#define _SPELL_HOWLINGGALE_H

#include "Spell.h"

#define ID_HOWLINGGALE 0x00000000

class HowlingGale : public Spell {
    private:
    float damage[5];

    public:
    HowlingGale(Champion* owner) : Spell(ID_HOWLINGGALE, owner, 0.25f, 0) {
        cooldown[0] = 14.0f;
        cooldown[1] = 13.0f;
        cooldown[2] = 12.0f;
        cooldown[3] = 11.0f;
        cooldown[4] = 10.0f;

        cost[0] = 90;
        cost[1] = 105;
        cost[2] = 120;
        cost[3] = 135;
        cost[4] = 150;

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