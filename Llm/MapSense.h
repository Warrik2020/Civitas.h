#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Llm
{
    class MapSense : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapSense(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Llm", "MapSense") {}
    public:
        void* Identify(void* map) const { void* __callArgs[] = { map }; return CallStatic("Identify", __callArgs, 1); }
        void Append(void* sb, int selfId, int otherId, void* nations, void* internals, void* map) const { void* __callArgs[] = { sb, &selfId, &otherId, nations, internals, map }; CallStatic("Append", __callArgs, 6); }
    };
}
