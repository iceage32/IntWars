#ifndef _SPELL_HGEVOLUTIONTURRET_H
#define _SPELL_HGEVOLUTIONTURRET_H

#include "Spell.h"

#define ID_HGEVOLUTIONTURRET 0x00000000

class HGEvolutionTurret : public Spell {
    private:
    float damage[5];

    public:
    HGEvolutionTurret(Champion* owner) : Spell(ID_HGEVOLUTIONTURRET, owner, 0.25f, 0) {
        cooldown[0] = 1.0f;
        cooldown[1] = 1.0f;
        cooldown[2] = 1.0f;
        cooldown[3] = 1.0f;
        cooldown[4] = 1.0f;

        cost[0] = 20;
        cost[1] = 20;
        cost[2] = 20;
        cost[3] = 20;
        cost[4] = 20;

        damage[0] = 12;
        damage[1] = 12;
        damage[2] = 12;
        damage[3] = 12;
        damage[4] = 12;
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