#ifndef _SPELL_SAPLINGTOSS_H
#define _SPELL_SAPLINGTOSS_H

#include "Spell.h"

#define ID_SAPLINGTOSS 0x00000000

class SaplingToss : public Spell {
    private:
    float damage[5];

    public:
    SaplingToss(Champion* owner) : Spell(ID_SAPLINGTOSS, owner, 0.25f, 0) {
        cooldown[0] = 12.0f;
        cooldown[1] = 12.0f;
        cooldown[2] = 12.0f;
        cooldown[3] = 12.0f;
        cooldown[4] = 12.0f;

        cost[0] = 60;
        cost[1] = 70;
        cost[2] = 80;
        cost[3] = 90;
        cost[4] = 100;

        damage[0] = 40;
        damage[1] = 40;
        damage[2] = 40;
        damage[3] = 40;
        damage[4] = 40;
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