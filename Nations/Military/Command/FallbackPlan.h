#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class FallbackPlan : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FallbackPlan(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "FallbackPlan") {}
    public:
        bool Manned(void* a, bool frontAlive) const { void* __callArgs[] = { a, &frontAlive }; return CallStaticValue<bool>("Manned", __callArgs, 2); }
        int Side(void* a, void* front, void* mil, void* grid, void* capital) const { void* __callArgs[] = { a, front, mil, grid, capital }; return CallStaticValue<int>("Side", __callArgs, 5); }
    };
}
