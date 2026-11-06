#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class ContactLine : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ContactLine(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "ContactLine") {}
    public:
        void* Place(void* d, void* enemy, int age, int enemyAge, void* grid, void* sameSide) const { void* __callArgs[] = { d, enemy, &age, &enemyAge, grid, sameSide }; return CallStatic("Place", __callArgs, 6); }
        bool NearestHeld(void* grid, void* from, int foe, int own, float reach, void* at) const { void* __callArgs[] = { grid, from, &foe, &own, &reach, &at }; return CallStaticValue<bool>("NearestHeld", __callArgs, 6); }
        float MaxHalfWidthTiles(float men, int age) const { void* __callArgs[] = { &men, &age }; return CallStaticValue<float>("MaxHalfWidthTiles", __callArgs, 2); }
        void* ContactPoint(void* grid, void* a, void* b, int nationA, int nationB) const { void* __callArgs[] = { grid, a, b, &nationA, &nationB }; return CallStatic("ContactPoint", __callArgs, 5); }
        bool BorderAlong(void* grid, void* from, void* dir, float reach, int nationId, void* at) const { void* __callArgs[] = { grid, from, dir, &reach, &nationId, &at }; return CallStaticValue<bool>("BorderAlong", __callArgs, 6); }
    };
}
