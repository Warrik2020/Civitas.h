#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::States
{
    class StateNameGenerator : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StateNameGenerator(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.States", "StateNameGenerator") {}
    public:
        void* Generate(int culture, void* usedNames, void* neighbourhood = nullptr) const { void* __callArgs[] = { &culture, usedNames, neighbourhood }; return CallStatic("Generate", __callArgs, 3); }
        void* RollOnce(int culture) const { void* __callArgs[] = { &culture }; return CallStatic("RollOnce", __callArgs, 1); }
        void* RollRealm(int culture) const { void* __callArgs[] = { &culture }; return CallStatic("RollRealm", __callArgs, 1); }
        int EndingCount(int family) const { void* __callArgs[] = { &family }; return CallStaticValue<int>("EndingCount", __callArgs, 1); }
    };
}
