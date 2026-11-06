#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class CapitalMarkerRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CapitalMarkerRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "CapitalMarkerRenderer") {}
    public:
        void MarkDirty() const { Call("MarkDirty", nullptr, 0); }
        void Sync(void* nations) const { void* __callArgs[] = { nations }; Call("Sync", __callArgs, 1); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
    };
}
