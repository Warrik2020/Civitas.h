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
        int Of(int ideology, int eraBand, int axis) const { void* args[] = { &ideology, &eraBand, &axis }; return CallStaticValue<int>("Of", args, 3); }
        void* BendNote(int ideology, int axis) const { void* args[] = { &ideology, &axis }; return CallStatic("BendNote", args, 2); }
        int ModernBand() const { return ReadStaticField<int>("ModernBand"); }
    };
}
