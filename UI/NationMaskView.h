#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class NationMaskView : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationMaskView(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "NationMaskView") {}
    public:
        bool AdmitsBrush(int ownerId) const { void* args[] = { &ownerId }; return CallStaticValue<bool>("AdmitsBrush", args, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
    };
}
