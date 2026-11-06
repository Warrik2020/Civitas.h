#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class CulturePicker : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CulturePicker(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "CulturePicker") {}
    public:
        void* Attach(void* row, void* overlayRoot, float width) const { void* __callArgs[] = { row, overlayRoot, &width }; return CallStatic("Attach", __callArgs, 3); }
        void Close() const { Call("Close", nullptr, 0); }
        int64_t Mask() const { return ReadField<int64_t>("Mask"); }
        void Mask(int64_t value) const { WriteField<int64_t>("Mask", value); }
        void* onChanged() const { return ReadField<void*>("onChanged"); }
        void onChanged(void* value) const { WriteField<void*>("onChanged", value); }
    };
}
