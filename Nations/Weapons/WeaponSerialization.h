#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class WeaponSerialization : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WeaponSerialization(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "WeaponSerialization") {}
    public:
        void Capture(void* s, void* w, int now = -2147483648) const { void* __callArgs[] = { s, w, &now }; CallStatic("Capture", __callArgs, 3); }
        void Restore(void* w, void* s, int now = -2147483648) const { void* __callArgs[] = { w, s, &now }; CallStatic("Restore", __callArgs, 3); }
        void* ToSer(void* d) const { void* __callArgs[] = { d }; return CallStatic("ToSer", __callArgs, 1); }
        void* FromSer(void* s) const { void* __callArgs[] = { s }; return CallStatic("FromSer", __callArgs, 1); }
    };
}
