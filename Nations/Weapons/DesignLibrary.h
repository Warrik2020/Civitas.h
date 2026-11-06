#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class DesignLibrary : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DesignLibrary(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "DesignLibrary") {}
    public:
        void* Remember(void* design) const { void* __callArgs[] = { design }; return CallStatic("Remember", __callArgs, 1); }
        bool Forget(const char* uid) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(uid ? uid : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStaticValue<bool>("Forget", __callArgs, 1); }
        void Seed(void* it) const { void* __callArgs[] = { it }; CallStatic("Seed", __callArgs, 1); }
        void Rearm() const { CallStatic("Rearm", nullptr, 0); }
        int Version() const { return ReadStaticField<int>("Version"); }
    };
}
