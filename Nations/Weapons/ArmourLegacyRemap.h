#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class ArmourLegacyRemap : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ArmourLegacyRemap(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "ArmourLegacyRemap") {}
    public:
        void Remap(void* d) const { void* __callArgs[] = { d }; CallStatic("Remap", __callArgs, 1); }
    };
}
