#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class HappinessSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit HappinessSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "HappinessSystem") {}
    public:
        void Tick(void* it, void* cfg, void* pcfg) const { void* __callArgs[] = { it, cfg, pcfg }; CallStatic("Tick", __callArgs, 3); }
        float DaysOfBuffer(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("DaysOfBuffer", __callArgs, 2); }
    };
}
