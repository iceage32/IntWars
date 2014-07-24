#ifndef _SPELL_SPIRITOFDREAD_H
#define _SPELL_SPIRITOFDREAD_H

#include "Spell.h"

#define ID_SPIRITOFDREAD 0x00000000

class SpiritofDread : public Spell {
    private:
    float damage[5];

    public:
    SpiritofDread(Champion* owner) : Spell(ID_SPIRITOFDREAD, owner, 0.25f, 0) {
        cooldown[0] = 22f;
        cooldown[1] = 21f;
        cooldown[2] = 20f;
        cooldown[3] = 19f;
        cooldown[4] = 18f;

        cost[0] = 50;
        cost[1] = 60;
        cost[2] = 70;
        cost[3] = 80;
        cost[4] = 90;

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