#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class BuiltInScenarios : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BuiltInScenarios(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "BuiltInScenarios") {}
    public:
        void Install() const { CallStatic("Install", nullptr, 0); }
        bool Restore(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { managed_0 }; return CallStaticValue<bool>("Restore", args, 1); }
        bool IsBuiltIn(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { managed_0 }; return CallStaticValue<bool>("IsBuiltIn", args, 1); }
        void* Title(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("Title", args, 1); }
        bool IsWorld(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { managed_0 }; return CallStaticValue<bool>("IsWorld", args, 1); }
        void* stems() const { return ReadField<void*>("stems"); }
        void SetStems(void* value) const { WriteField<void*>("stems", value); }
        void* hashes() const { return ReadField<void*>("hashes"); }
        void SetHashes(void* value) const { WriteField<void*>("hashes", value); }
    };
}
