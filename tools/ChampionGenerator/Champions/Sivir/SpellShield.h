#ifndef _SPELL_SPELLSHIELD_H
#define _SPELL_SPELLSHIELD_H

#include "Spell.h"

#define ID_SPELLSHIELD 0x00000000

class SpellShield : public Spell {
    private:
    float damage[5];

    public:
    SpellShield(Champion* owner) : Spell(ID_SPELLSHIELD, owner, 0.25f, 0) {
        cooldown[0] = 22f;
        cooldown[1] = 19f;
        cooldown[2] = 16f;
        cooldown[3] = 13f;
        cooldown[4] = 10f;

        cost[0] = 0;
        cost[1] = 0;
        cost[2] = 0;
        cost[3] = 0;
        cost[4] = 0;

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