#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class IncursionStancePrompt : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IncursionStancePrompt(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "IncursionStancePrompt") {}
    public:
        int Apply(void* ids, int stance, void* military) const { void* __callArgs[] = { ids, &stance, military }; return CallStaticValue<int>("Apply", __callArgs, 3); }
        void* StanceNote(void* d, void* internals) const { void* __callArgs[] = { d, internals }; return CallStatic("StanceNote", __callArgs, 2); }
    };
}
