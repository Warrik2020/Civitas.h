#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class ArmourClipMemo : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ArmourClipMemo(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "ArmourClipMemo") {}
    public:
        void* For_(void* poly) const { void* __callArgs[] = { poly }; return CallStatic("For", __callArgs, 1); }
    };
}
