#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class AssimilationScopes : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AssimilationScopes(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "AssimilationScopes") {}
    public:
        void* NameOf(int s) const { void* args[] = { &s }; return CallStatic("NameOf", args, 1); }
        int Of(int pushMask, int zoneMask, int axis) const { void* args[] = { &pushMask, &zoneMask, &axis }; return CallStaticValue<int>("Of", args, 3); }
        void Write(int& pushMask, int& zoneMask, int axis, int s) const { void* args[] = { &pushMask, &zoneMask, &axis, &s }; CallStatic("Write", args, 4); }
        void* Names() const { return ReadStaticField<void*>("Names"); }
    };
}
