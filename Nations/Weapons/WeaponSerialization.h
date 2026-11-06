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
        void Capture(void* s, void* w, int now = -2147483648) const { void* args[] = { s, w, &now }; CallStatic("Capture", args, 3); }
        void Restore(void* w, void* s, int now = -2147483648) const { void* args[] = { w, s, &now }; CallStatic("Restore", args, 3); }
        void* ToSer(void* d) const { void* args[] = { d }; return CallStatic("ToSer", args, 1); }
        void* FromSer(void* s) const { void* args[] = { s }; return CallStatic("FromSer", args, 1); }
    };
}
