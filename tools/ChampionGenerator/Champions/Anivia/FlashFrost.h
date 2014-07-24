#ifndef _SPELL_FLASHFROST_H
#define _SPELL_FLASHFROST_H

#include "Spell.h"

#define ID_FLASHFROST 0x00000000

class FlashFrost : public Spell {
    private:
    float damage[5];

    public:
    FlashFrost(Champion* owner) : Spell(ID_FLASHFROST, owner, 0.25f, 0) {
        cooldown[0] = 12f;
        cooldown[1] = 11f;
        cooldown[2] = 10f;
        cooldown[3] = 9f;
        cooldown[4] = 8f;

        cost[0] = 80;
        cost[1] = 90;
        cost[2] = 100;
        cost[3] = 110;
        cost[4] = 120;

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