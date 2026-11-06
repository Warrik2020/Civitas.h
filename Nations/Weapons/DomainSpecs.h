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
        void* Of(int domain) const { void* args[] = { &domain }; return CallStatic("Of", args, 1); }
        bool Unlocked(void* it, int domain) const { void* args[] = { it, &domain }; return CallStaticValue<bool>("Unlocked", args, 2); }
        void* LockReason(void* it, int domain) const { void* args[] = { it, &domain }; return CallStatic("LockReason", args, 2); }
        void* LockReasonDated(void* it, int domain) const { void* args[] = { it, &domain }; return CallStatic("LockReasonDated", args, 2); }
        bool AnyUnlocked(void* it) const { void* args[] = { it }; return CallStaticValue<bool>("AnyUnlocked", args, 1); }
        void* All() const { return ReadStaticField<void*>("All"); }
    };
}
