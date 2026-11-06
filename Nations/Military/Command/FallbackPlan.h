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
        bool Manned(void* a, bool frontAlive) const { void* args[] = { a, &frontAlive }; return CallStaticValue<bool>("Manned", args, 2); }
        int Side(void* a, void* front, void* mil, void* grid, void* capital) const { void* args[] = { a, front, mil, grid, capital }; return CallStaticValue<int>("Side", args, 5); }
    };
}
