#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Expansion
{
    class FrontierResistance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FrontierResistance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Expansion", "FrontierResistance") {}
    public:
        void EnsureBuilt(void* grid) const { void* args[] = { grid }; CallStatic("EnsureBuilt", args, 1); }
        float Of(int x, int y) const { void* args[] = { &x, &y }; return CallStaticValue<float>("Of", args, 2); }
    };
}
