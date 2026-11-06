#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class ScenarioJson : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ScenarioJson(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "ScenarioJson") {}
    public:
        int Ws(const char* s, int i) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* __callArgs[] = { managed_0, &i }; return CallStaticValue<int>("Ws", __callArgs, 2); }
        bool Key(const char* s, int& i, const char*& key) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* __callArgs[] = { managed_0, &i, &key }; return CallStaticValue<bool>("Key", __callArgs, 3); }
        void* Str(const char* s, int at) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* __callArgs[] = { managed_0, &at }; return CallStatic("Str", __callArgs, 2); }
        double Num(const char* s, int at) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* __callArgs[] = { managed_0, &at }; return CallStaticValue<double>("Num", __callArgs, 2); }
        void* Ints(const char* s, int at) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* __callArgs[] = { managed_0, &at }; return CallStatic("Ints", __callArgs, 2); }
        int Skip(const char* s, int at) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* __callArgs[] = { managed_0, &at }; return CallStaticValue<int>("Skip", __callArgs, 2); }
    };
}
