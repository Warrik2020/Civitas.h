#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class ClaimMap : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ClaimMap(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "ClaimMap") {}
    public:
        bool Open(int focusNation, int pickState) const { void* __callArgs[] = { &focusNation, &pickState }; return CallStaticValue<bool>("Open", __callArgs, 2); }
        void Toggle() const { CallStatic("Toggle", nullptr, 0); }
        void CloseMap() const { CallStatic("CloseMap", nullptr, 0); }
    };
}
