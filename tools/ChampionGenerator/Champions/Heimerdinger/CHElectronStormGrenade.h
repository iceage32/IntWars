#ifndef _SPELL_CHELECTRONSTORMGRENADE_H
#define _SPELL_CHELECTRONSTORMGRENADE_H

#include "Spell.h"

#define ID_CHELECTRONSTORMGRENADE 0x00000000

class CHElectronStormGrenade : public Spell {
    private:
    float damage[5];

    public:
    CHElectronStormGrenade(Champion* owner) : Spell(ID_CHELECTRONSTORMGRENADE, owner, 0.25f, 0) {
        cooldown[0] = 18f;
        cooldown[1] = 16f;
        cooldown[2] = 14f;
        cooldown[3] = 12f;
        cooldown[4] = 10f;

        cost[0] = 85;
        cost[1] = 85;
        cost[2] = 85;
        cost[3] = 85;
        cost[4] = 85;

        damage[0] = 60;
        damage[1] = 60;
        damage[2] = 60;
        damage[3] = 60;
        damage[4] = 60;
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