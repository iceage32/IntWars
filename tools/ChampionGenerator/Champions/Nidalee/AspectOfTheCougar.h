#ifndef _SPELL_ASPECTOFTHECOUGAR_H
#define _SPELL_ASPECTOFTHECOUGAR_H

#include "Spell.h"

#define ID_ASPECTOFTHECOUGAR 0x00000000

class AspectOfTheCougar : public Spell {
    private:
    float damage[5];

    public:
    AspectOfTheCougar(Champion* owner) : Spell(ID_ASPECTOFTHECOUGAR, owner, 0.25f, 0) {
        cooldown[0] = 3.0f;
        cooldown[1] = 3.0f;
        cooldown[2] = 3.0f;
        cooldown[3] = 3.0f;
        cooldown[4] = 0.0f;

        cost[0] = 0;
        cost[1] = 0;
        cost[2] = 0;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 70;
        damage[1] = 70;
        damage[2] = 70;
        damage[3] = 70;
        damage[4] = 70;
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