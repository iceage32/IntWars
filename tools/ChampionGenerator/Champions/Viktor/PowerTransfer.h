#ifndef _SPELL_POWERTRANSFER_H
#define _SPELL_POWERTRANSFER_H

#include "Spell.h"

#define ID_POWERTRANSFER 0x00000000

class PowerTransfer : public Spell {
    private:
    float damage[5];

    public:
    PowerTransfer(Champion* owner) : Spell(ID_POWERTRANSFER, owner, 0.25f, 0) {
        cooldown[0] = 9f;
        cooldown[1] = 8f;
        cooldown[2] = 7f;
        cooldown[3] = 6f;
        cooldown[4] = 5f;

        cost[0] = 45;
        cost[1] = 50;
        cost[2] = 55;
        cost[3] = 60;
        cost[4] = 65;

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