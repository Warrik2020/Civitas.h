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
        void SetSlices(void* slices) const { void* args[] = { slices }; Call("SetSlices", args, 1); }
        void* emptyColor() const { return ReadField<void*>("emptyColor"); }
        void SetEmptyColor(void* value) const { WriteField<void*>("emptyColor", value); }
        float weight() const { return ReadField<float>("weight"); }
        void SetWeight(float value) const { WriteField<float>("weight", value); }
        void* color() const { return ReadField<void*>("color"); }
        void SetColor(void* value) const { WriteField<void*>("color", value); }
    };
}
