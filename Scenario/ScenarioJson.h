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
        int Ws(const char* s, int i) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* args[] = { managed_0, &i }; return CallStaticValue<int>("Ws", args, 2); }
        bool Key(const char* s, int& i, const char*& key) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* args[] = { managed_0, &i, &key }; return CallStaticValue<bool>("Key", args, 3); }
        void* Str(const char* s, int at) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* args[] = { managed_0, &at }; return CallStatic("Str", args, 2); }
        double Num(const char* s, int at) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* args[] = { managed_0, &at }; return CallStaticValue<double>("Num", args, 2); }
        void* Ints(const char* s, int at) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* args[] = { managed_0, &at }; return CallStatic("Ints", args, 2); }
        int Skip(const char* s, int at) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* args[] = { managed_0, &at }; return CallStaticValue<int>("Skip", args, 2); }
    };
}
