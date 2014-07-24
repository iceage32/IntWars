#ifndef _SPELL_PLAYFULTRICKSTER_H
#define _SPELL_PLAYFULTRICKSTER_H

#include "Spell.h"

#define ID_PLAYFULTRICKSTER 0x00000000

class PlayfulTrickster : public Spell {
    private:
    float damage[5];

    public:
    PlayfulTrickster(Champion* owner) : Spell(ID_PLAYFULTRICKSTER, owner, 0.25f, 0) {
        cooldown[0] = 16f;
        cooldown[1] = 14f;
        cooldown[2] = 12f;
        cooldown[3] = 10f;
        cooldown[4] = 8f;

        cost[0] = 90;
        cost[1] = 100;
        cost[2] = 110;
        cost[3] = 120;
        cost[4] = 130;

        damage[0] = 70;
        damage[1] = 70;
        damage[2] = 70;
        damage[3] = 70;
        damage[4] = 70;
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