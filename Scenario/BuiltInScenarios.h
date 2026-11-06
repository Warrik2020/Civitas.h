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
        bool Restore(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStaticValue<bool>("Restore", __callArgs, 1); }
        bool IsBuiltIn(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStaticValue<bool>("IsBuiltIn", __callArgs, 1); }
        void* Title(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("Title", __callArgs, 1); }
        bool IsWorld(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStaticValue<bool>("IsWorld", __callArgs, 1); }
    };
}
