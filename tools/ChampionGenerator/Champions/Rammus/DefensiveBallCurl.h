#ifndef _SPELL_DEFENSIVEBALLCURL_H
#define _SPELL_DEFENSIVEBALLCURL_H

#include "Spell.h"

#define ID_DEFENSIVEBALLCURL 0x00000000

class DefensiveBallCurl : public Spell {
    private:
    float damage[5];

    public:
    DefensiveBallCurl(Champion* owner) : Spell(ID_DEFENSIVEBALLCURL, owner, 0.25f, 0) {
        cooldown[0] = 14f;
        cooldown[1] = 14f;
        cooldown[2] = 14f;
        cooldown[3] = 14f;
        cooldown[4] = 14f;

        cost[0] = 40;
        cost[1] = 40;
        cost[2] = 40;
        cost[3] = 40;
        cost[4] = 40;

        damage[0] = 40;
        damage[1] = 40;
        damage[2] = 40;
        damage[3] = 40;
        damage[4] = 40;
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