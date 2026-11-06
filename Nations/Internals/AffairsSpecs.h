#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsSpecs : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsSpecs(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsSpecs") {}
    public:
        int StatusIndex(const char* word) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(word ? word : "") : nullptr; void* args[] = { managed_0 }; return CallStaticValue<int>("StatusIndex", args, 1); }
        int IncidentIndex(const char* word) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(word ? word : "") : nullptr; void* args[] = { managed_0 }; return CallStaticValue<int>("IncidentIndex", args, 1); }
        void* RoleWord(const char* role) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(role ? role : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("RoleWord", args, 1); }
        void* Traits() const { return ReadStaticField<void*>("Traits"); }
        void* StatusWords() const { return ReadStaticField<void*>("StatusWords"); }
        void* IncidentWords() const { return ReadStaticField<void*>("IncidentWords"); }
        void* Ideologies() const { return ReadStaticField<void*>("Ideologies"); }
        void* CostKinds() const { return ReadStaticField<void*>("CostKinds"); }
        void* MarkFields() const { return ReadStaticField<void*>("MarkFields"); }
    };
}
