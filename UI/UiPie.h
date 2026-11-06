#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiPie : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiPie(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiPie") {}
    public:
        void SetSlices(void* slices) const { void* __callArgs[] = { slices }; Call("SetSlices", __callArgs, 1); }
        void* emptyColor() const { return ReadField<void*>("emptyColor"); }
        void emptyColor(void* value) const { WriteField<void*>("emptyColor", value); }
    };
}
