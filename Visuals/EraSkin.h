#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Visuals
{
    class EraSkin : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit EraSkin(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Visuals", "EraSkin") {}
    public:
        void* Theme(int era) const { void* __callArgs[] = { &era }; return CallStatic("Theme", __callArgs, 1); }
        void* For_(int slot, int era) const { void* __callArgs[] = { &slot, &era }; return CallStatic("For", __callArgs, 2); }
        void* AllPaths() const { return CallStatic("AllPaths", nullptr, 0); }
        void* AllThemes() const { return CallStatic("AllThemes", nullptr, 0); }
    };
}
