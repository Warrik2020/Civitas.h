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
        void* Generate(int culture, void* usedNames, void* neighbourhood = nullptr) const { void* args[] = { &culture, usedNames, neighbourhood }; return CallStatic("Generate", args, 3); }
        void* RollOnce(int culture) const { void* args[] = { &culture }; return CallStatic("RollOnce", args, 1); }
        void* RollRealm(int culture) const { void* args[] = { &culture }; return CallStatic("RollRealm", args, 1); }
        int EndingCount(int family) const { void* args[] = { &family }; return CallStaticValue<int>("EndingCount", args, 1); }
    };
}
