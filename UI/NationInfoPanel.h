#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class NationInfoPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationInfoPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "NationInfoPanel") {}
    public:
        bool CanOpenFor(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<bool>("CanOpenFor", __callArgs, 1); }
        void* OpenFor(void** args = nullptr, int count = 0) const { return CallStatic("OpenFor", args, count); }
        void CloseDocked() const { Call("CloseDocked", nullptr, 0); }
    };
}
