#ifndef _SPELL_HEIGHTENEDSENSES_H
#define _SPELL_HEIGHTENEDSENSES_H

#include "Spell.h"

#define ID_HEIGHTENEDSENSES 0x00000000

class HeightenedSenses : public Spell {
    private:
    float damage[5];

    public:
    HeightenedSenses(Champion* owner) : Spell(ID_HEIGHTENEDSENSES, owner, 0.25f, 0) {
        cooldown[0] = 50.0f;
        cooldown[1] = 45.0f;
        cooldown[2] = 40.0f;
        cooldown[3] = 35.0f;
        cooldown[4] = 30.0f;

        cost[0] = 0;
        cost[1] = 0;
        cost[2] = 0;
        cost[3] = 0;
        cost[4] = 0;

        damage[0] = 20;
        damage[1] = 20;
        damage[2] = 20;
        damage[3] = 20;
        damage[4] = 20;
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