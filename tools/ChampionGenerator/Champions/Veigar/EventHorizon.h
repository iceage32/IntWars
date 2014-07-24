#ifndef _SPELL_EVENTHORIZON_H
#define _SPELL_EVENTHORIZON_H

#include "Spell.h"

#define ID_EVENTHORIZON 0x00000000

class EventHorizon : public Spell {
    private:
    float damage[5];

    public:
    EventHorizon(Champion* owner) : Spell(ID_EVENTHORIZON, owner, 0.25f, 0) {
        cooldown[0] = 20f;
        cooldown[1] = 19f;
        cooldown[2] = 18f;
        cooldown[3] = 17f;
        cooldown[4] = 16f;

        cost[0] = 80;
        cost[1] = 90;
        cost[2] = 100;
        cost[3] = 110;
        cost[4] = 120;

        damage[0] = 1.5;
        damage[1] = 1.5;
        damage[2] = 1.5;
        damage[3] = 1.5;
        damage[4] = 1.5;
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