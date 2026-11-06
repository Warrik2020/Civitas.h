#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Weapons
{
    class WeaponDesignPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WeaponDesignPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Weapons", "WeaponDesignPanel") {}
    public:
        void* OrganColor(float protection) const { void* __callArgs[] = { &protection }; return CallStatic("OrganColor", __callArgs, 1); }
        bool IsPaired(int k) const { void* __callArgs[] = { &k }; return CallStaticValue<bool>("IsPaired", __callArgs, 1); }
        void* OpenFor(void** args = nullptr, int count = 0) const { return CallStatic("OpenFor", args, count); }
        void* OpenNew(void** args = nullptr, int count = 0) const { return CallStatic("OpenNew", args, count); }
    };
}
