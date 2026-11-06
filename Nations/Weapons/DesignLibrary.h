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
        void* Remember(void* design) const { void* args[] = { design }; return CallStatic("Remember", args, 1); }
        bool Forget(const char* uid) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(uid ? uid : "") : nullptr; void* args[] = { managed_0 }; return CallStaticValue<bool>("Forget", args, 1); }
        void Seed(void* it) const { void* args[] = { it }; CallStatic("Seed", args, 1); }
        void Rearm() const { CallStatic("Rearm", nullptr, 0); }
        int Version() const { return ReadStaticField<int>("Version"); }
        int version() const { return ReadField<int>("version"); }
        void SetVersion(int value) const { WriteField<int>("version", value); }
        void* designs() const { return ReadField<void*>("designs"); }
        void SetDesigns(void* value) const { WriteField<void*>("designs", value); }
    };
}
