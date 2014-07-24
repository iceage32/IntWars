#ifndef _SPELL_AEGISOFZEONIA_H
#define _SPELL_AEGISOFZEONIA_H

#include "Spell.h"

#define ID_AEGISOFZEONIA 0x00000000

class AegisofZeonia : public Spell {
    private:
    float damage[5];

    public:
    AegisofZeonia(Champion* owner) : Spell(ID_AEGISOFZEONIA, owner, 0.25f, 0) {
        cooldown[0] = 13f;
        cooldown[1] = 12f;
        cooldown[2] = 11f;
        cooldown[3] = 10f;
        cooldown[4] = 9f;

        cost[0] = 55;
        cost[1] = 55;
        cost[2] = 55;
        cost[3] = 55;
        cost[4] = 55;

        damage[0] = 50;
        damage[1] = 50;
        damage[2] = 50;
        damage[3] = 50;
        damage[4] = 50;
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