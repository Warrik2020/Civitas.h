#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PeoplesOrdersSection : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeoplesOrdersSection(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PeoplesOrdersSection") {}
    public:
        bool Refresh(void* c) const { void* __callArgs[] = { &c }; return CallValue<bool>("Refresh", __callArgs, 1); }
    };
}
