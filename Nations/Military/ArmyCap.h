#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class ArmyCap : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ArmyCap(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "ArmyCap") {}
    public:
        void Refresh(void* mil, void* it, void* cfg, void* diff) const { void* __callArgs[] = { mil, it, cfg, diff }; CallStatic("Refresh", __callArgs, 4); }
        float BorderDemand(float slots, void* cfg) const { void* __callArgs[] = { &slots, cfg }; return CallStaticValue<float>("BorderDemand", __callArgs, 2); }
    };
}
