#ifndef _SPELL_VENGEFULMAELSTROM_H
#define _SPELL_VENGEFULMAELSTROM_H

#include "Spell.h"

#define ID_VENGEFULMAELSTROM 0x00000000

class VengefulMaelstrom : public Spell {
    private:
    float damage[5];

    public:
    VengefulMaelstrom(Champion* owner) : Spell(ID_VENGEFULMAELSTROM, owner, 0.25f, 0) {
        cooldown[0] = 40f;
        cooldown[1] = 30f;
        cooldown[2] = 20f;
        cooldown[3] = 0f;
        cooldown[4] = 0f;

        cost[0] = 40;
        cost[1] = 40;
        cost[2] = 40;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 20;
        damage[1] = 20;
        damage[2] = 20;
        damage[3] = 20;
        damage[4] = 20;
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