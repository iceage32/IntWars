#ifndef _SPELL_DEATHSENTENCE_H
#define _SPELL_DEATHSENTENCE_H

#include "Spell.h"

#define ID_DEATHSENTENCE 0x00000000

class DeathSentence : public Spell {
    private:
    float damage[5];

    public:
    DeathSentence(Champion* owner) : Spell(ID_DEATHSENTENCE, owner, 0.25f, 0) {
        cooldown[0] = 20f;
        cooldown[1] = 18f;
        cooldown[2] = 16f;
        cooldown[3] = 14f;
        cooldown[4] = 12f;

        cost[0] = 80;
        cost[1] = 80;
        cost[2] = 80;
        cost[3] = 80;
        cost[4] = 80;

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