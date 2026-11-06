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
        void* Theme(int era) const { void* args[] = { &era }; return CallStatic("Theme", args, 1); }
        void* For_(int slot, int era) const { void* args[] = { &slot, &era }; return CallStatic("For", args, 2); }
        void* AllPaths() const { return CallStatic("AllPaths", nullptr, 0); }
        void* AllThemes() const { return CallStatic("AllThemes", nullptr, 0); }
        int slot() const { return ReadField<int>("slot"); }
        int from() const { return ReadField<int>("from"); }
        void* path() const { return ReadField<void*>("path"); }
        void* paint() const { return ReadField<void*>("paint"); }
    };
}
