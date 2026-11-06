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
        void* Identify(void* map) const { void* args[] = { map }; return CallStatic("Identify", args, 1); }
        void Append(void* sb, int selfId, int otherId, void* nations, void* internals, void* map) const { void* args[] = { sb, &selfId, &otherId, nations, internals, map }; CallStatic("Append", args, 6); }
    };
}
