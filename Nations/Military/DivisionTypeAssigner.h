#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class DivisionTypeAssigner : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DivisionTypeAssigner(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "DivisionTypeAssigner") {}
    public:
        int Assign(int ordinal, void* internals, void* cfg) const { void* args[] = { &ordinal, internals, cfg }; return CallStaticValue<int>("Assign", args, 3); }
    };
}
