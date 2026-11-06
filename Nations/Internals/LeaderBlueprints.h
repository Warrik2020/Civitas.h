#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class LeaderBlueprints : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LeaderBlueprints(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "LeaderBlueprints") {}
    public:
        int Budget(int age, void* cfg) const { void* __callArgs[] = { &age, cfg }; return CallStaticValue<int>("Budget", __callArgs, 2); }
        int Spent(void* b) const { void* __callArgs[] = { b }; return CallStaticValue<int>("Spent", __callArgs, 1); }
        int Remaining(void* b, void* cfg) const { void* __callArgs[] = { b, cfg }; return CallStaticValue<int>("Remaining", __callArgs, 2); }
        int MaxTraits(void* cfg) const { void* __callArgs[] = { cfg }; return CallStaticValue<int>("MaxTraits", __callArgs, 1); }
        int MinAge(void* cfg) const { void* __callArgs[] = { cfg }; return CallStaticValue<int>("MinAge", __callArgs, 1); }
        int MaxAge(void* cfg) const { void* __callArgs[] = { cfg }; return CallStaticValue<int>("MaxAge", __callArgs, 1); }
        void* RefusalFor(void* b, int t, void* cfg) const { void* __callArgs[] = { b, &t, cfg }; return CallStatic("RefusalFor", __callArgs, 3); }
        void* Toggle(void* b, int t, void* cfg) const { void* __callArgs[] = { b, &t, cfg }; return CallStatic("Toggle", __callArgs, 3); }
        bool IsLegal(void* b, void* cfg) const { void* __callArgs[] = { b, cfg }; return CallStaticValue<bool>("IsLegal", __callArgs, 2); }
        int ExpectedReignYears(void* b, void* cfg) const { void* __callArgs[] = { b, cfg }; return CallStaticValue<int>("ExpectedReignYears", __callArgs, 2); }
        void* Personality(void* b) const { void* __callArgs[] = { b }; return CallStatic("Personality", __callArgs, 1); }
        void AppendEffects(void* sb, void* b, void* cfg, const char* separator = ", ", bool colorize = false) const { void* managed_3 = Api() && Api()->NewString ? Api()->NewString(separator ? separator : "") : nullptr; void* __callArgs[] = { sb, b, cfg, managed_3, &colorize }; CallStatic("AppendEffects", __callArgs, 5); }
        void* Crown(void* b, void* cfg, int government, int tick, int tiles, float ticksPerYear) const { void* __callArgs[] = { b, cfg, &government, &tick, &tiles, &ticksPerYear }; return CallStatic("Crown", __callArgs, 6); }
        void* Random(void* cfg, int government, int64_t nameCultures = 0L, int64_t houseCultures = 0L) const { void* __callArgs[] = { cfg, &government, &nameCultures, &houseCultures }; return CallStatic("Random", __callArgs, 4); }
    };
}
