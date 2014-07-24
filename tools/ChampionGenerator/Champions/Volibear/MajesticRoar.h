#ifndef _SPELL_MAJESTICROAR_H
#define _SPELL_MAJESTICROAR_H

#include "Spell.h"

#define ID_MAJESTICROAR 0x00000000

class MajesticRoar : public Spell {
    private:
    float damage[5];

    public:
    MajesticRoar(Champion* owner) : Spell(ID_MAJESTICROAR, owner, 0.25f, 0) {
        cooldown[0] = 11f;
        cooldown[1] = 11f;
        cooldown[2] = 11f;
        cooldown[3] = 11f;
        cooldown[4] = 11f;

        cost[0] = 60;
        cost[1] = 65;
        cost[2] = 70;
        cost[3] = 75;
        cost[4] = 80;

        damage[0] = 30;
        damage[1] = 30;
        damage[2] = 30;
        damage[3] = 30;
        damage[4] = 30;
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