#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class AcceptanceSlots : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AcceptanceSlots(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "AcceptanceSlots") {}
    public:
        int Of(int ideology, int eraBand, int axis) const { void* __callArgs[] = { &ideology, &eraBand, &axis }; return CallStaticValue<int>("Of", __callArgs, 3); }
        void* BendNote(int ideology, int axis) const { void* __callArgs[] = { &ideology, &axis }; return CallStatic("BendNote", __callArgs, 2); }
        int ModernBand() const { return ReadStaticField<int>("ModernBand"); }
    };
}
