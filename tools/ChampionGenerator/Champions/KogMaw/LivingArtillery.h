#ifndef _SPELL_LIVINGARTILLERY_H
#define _SPELL_LIVINGARTILLERY_H

#include "Spell.h"

#define ID_LIVINGARTILLERY 0x00000000

class LivingArtillery : public Spell {
    private:
    float damage[5];

    public:
    LivingArtillery(Champion* owner) : Spell(ID_LIVINGARTILLERY, owner, 0.25f, 0) {
        cooldown[0] = 2f;
        cooldown[1] = 1.5f;
        cooldown[2] = 1f;
        cooldown[3] = 0f;
        cooldown[4] = 0f;

        cost[0] = 40;
        cost[1] = 40;
        cost[2] = 40;
        cost[3] = 0;
        cost[4] = 0;

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