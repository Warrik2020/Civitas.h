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
        void* NameOf(int s) const { void* __callArgs[] = { &s }; return CallStatic("NameOf", __callArgs, 1); }
        int Of(int pushMask, int zoneMask, int axis) const { void* __callArgs[] = { &pushMask, &zoneMask, &axis }; return CallStaticValue<int>("Of", __callArgs, 3); }
        void Write(int& pushMask, int& zoneMask, int axis, int s) const { void* __callArgs[] = { &pushMask, &zoneMask, &axis, &s }; CallStatic("Write", __callArgs, 4); }
        void* Names() const { return ReadStaticField<void*>("Names"); }
    };
}
