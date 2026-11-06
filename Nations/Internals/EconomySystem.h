#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class EconomySystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit EconomySystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "EconomySystem") {}
    public:
        void Tick(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; CallStatic("Tick", __callArgs, 2); }
        void* BuildingName(int era, void* cfg) const { void* __callArgs[] = { &era, cfg }; return CallStatic("BuildingName", __callArgs, 2); }
    };
}
