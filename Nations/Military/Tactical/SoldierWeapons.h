#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class SoldierWeapons : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SoldierWeapons(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "SoldierWeapons") {}
    public:
        int ClassOf(void* p, int arm) const { void* __callArgs[] = { &p, &arm }; return CallStaticValue<int>("ClassOf", __callArgs, 2); }
        void* Bake(void* bd, void* ex) const { void* __callArgs[] = { &bd, &ex }; return CallStatic("Bake", __callArgs, 2); }
        float MarchSpeed(void* u, bool run, int f) const { void* __callArgs[] = { &u, &run, &f }; return CallStaticValue<float>("MarchSpeed", __callArgs, 3); }
    };
}
