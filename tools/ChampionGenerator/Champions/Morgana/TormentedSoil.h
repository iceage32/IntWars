#ifndef _SPELL_TORMENTEDSOIL_H
#define _SPELL_TORMENTEDSOIL_H

#include "Spell.h"

#define ID_TORMENTEDSOIL 0x00000000

class TormentedSoil : public Spell {
    private:
    float damage[5];

    public:
    TormentedSoil(Champion* owner) : Spell(ID_TORMENTEDSOIL, owner, 0.25f, 0) {
        cooldown[0] = 10f;
        cooldown[1] = 10f;
        cooldown[2] = 10f;
        cooldown[3] = 10f;
        cooldown[4] = 10f;

        cost[0] = 70;
        cost[1] = 85;
        cost[2] = 100;
        cost[3] = 115;
        cost[4] = 130;

        damage[0] = 12;
        damage[1] = 12;
        damage[2] = 12;
        damage[3] = 12;
        damage[4] = 12;
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