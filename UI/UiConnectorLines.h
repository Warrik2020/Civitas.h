#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiConnectorLines : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiConnectorLines(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiConnectorLines") {}
    public:
        void SetEdges(void* edges) const { void* __callArgs[] = { edges }; Call("SetEdges", __callArgs, 1); }
    };
}
