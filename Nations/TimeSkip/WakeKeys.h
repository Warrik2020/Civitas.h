#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::TimeSkip
{
    class WakeKeys : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WakeKeys(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.TimeSkip", "WakeKeys") {}
    public:
        void* Of(const char* kind, int a = -1, int b = -1) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(kind ? kind : "") : nullptr; void* __callArgs[] = { managed_0, &a, &b }; return CallStatic("Of", __callArgs, 3); }
    };
}
