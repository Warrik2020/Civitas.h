#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class DomainSpecs : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DomainSpecs(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "DomainSpecs") {}
    public:
        void* Of(int domain) const { void* __callArgs[] = { &domain }; return CallStatic("Of", __callArgs, 1); }
        bool Unlocked(void* it, int domain) const { void* __callArgs[] = { it, &domain }; return CallStaticValue<bool>("Unlocked", __callArgs, 2); }
        void* LockReason(void* it, int domain) const { void* __callArgs[] = { it, &domain }; return CallStatic("LockReason", __callArgs, 2); }
        void* LockReasonDated(void* it, int domain) const { void* __callArgs[] = { it, &domain }; return CallStatic("LockReasonDated", __callArgs, 2); }
        bool AnyUnlocked(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<bool>("AnyUnlocked", __callArgs, 1); }
        void* All() const { return ReadStaticField<void*>("All"); }
    };
}
