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
        int ClassOf(void* p, int arm) const { void* args[] = { &p, &arm }; return CallStaticValue<int>("ClassOf", args, 2); }
        void* Bake(void* bd, void* ex) const { void* args[] = { &bd, &ex }; return CallStatic("Bake", args, 2); }
        float MarchSpeed(void* u, bool run, int f) const { void* args[] = { &u, &run, &f }; return CallStaticValue<float>("MarchSpeed", args, 3); }
    };
}
