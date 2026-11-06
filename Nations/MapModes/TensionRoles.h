#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::MapModes
{
    class TensionRoles : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TensionRoles(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.MapModes", "TensionRoles") {}
    public:
        int Resolve(bool isFocus, bool menace, bool victim, bool vulture, bool rival, bool rivalHot, bool inLeague, int backing) const { void* __callArgs[] = { &isFocus, &menace, &victim, &vulture, &rival, &rivalHot, &inLeague, &backing }; return CallStaticValue<int>("Resolve", __callArgs, 8); }
    };
}
