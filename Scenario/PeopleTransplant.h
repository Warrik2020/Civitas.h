#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class PeopleTransplant : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeopleTransplant(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "PeopleTransplant") {}
    public:
        bool ReadHeader(const char* path, void* h) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(path ? path : "") : nullptr; void* __callArgs[] = { managed_0, &h }; return CallStaticValue<bool>("ReadHeader", __callArgs, 2); }
        void* OnSameMap(const char* mapHash, int width, int height) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(mapHash ? mapHash : "") : nullptr; void* __callArgs[] = { managed_0, &width, &height }; return CallStatic("OnSameMap", __callArgs, 3); }
        void* CopyInto(void* source, const char* stem) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(stem ? stem : "") : nullptr; void* __callArgs[] = { source, managed_1 }; return CallStatic("CopyInto", __callArgs, 2); }
        void Apply(void* source, void* target) const { void* __callArgs[] = { source, target }; CallStatic("Apply", __callArgs, 2); }
    };
}
