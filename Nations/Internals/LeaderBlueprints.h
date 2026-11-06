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
        int Budget(int age, void* cfg) const { void* args[] = { &age, cfg }; return CallStaticValue<int>("Budget", args, 2); }
        int Spent(void* b) const { void* args[] = { b }; return CallStaticValue<int>("Spent", args, 1); }
        int Remaining(void* b, void* cfg) const { void* args[] = { b, cfg }; return CallStaticValue<int>("Remaining", args, 2); }
        int MaxTraits(void* cfg) const { void* args[] = { cfg }; return CallStaticValue<int>("MaxTraits", args, 1); }
        int MinAge(void* cfg) const { void* args[] = { cfg }; return CallStaticValue<int>("MinAge", args, 1); }
        int MaxAge(void* cfg) const { void* args[] = { cfg }; return CallStaticValue<int>("MaxAge", args, 1); }
        void* RefusalFor(void* b, int t, void* cfg) const { void* args[] = { b, &t, cfg }; return CallStatic("RefusalFor", args, 3); }
        void* Toggle(void* b, int t, void* cfg) const { void* args[] = { b, &t, cfg }; return CallStatic("Toggle", args, 3); }
        bool IsLegal(void* b, void* cfg) const { void* args[] = { b, cfg }; return CallStaticValue<bool>("IsLegal", args, 2); }
        int ExpectedReignYears(void* b, void* cfg) const { void* args[] = { b, cfg }; return CallStaticValue<int>("ExpectedReignYears", args, 2); }
        void* Personality(void* b) const { void* args[] = { b }; return CallStatic("Personality", args, 1); }
        void AppendEffects(void* sb, void* b, void* cfg, const char* separator = ", ", bool colorize = false) const { void* managed_3 = Api() && Api()->NewString ? Api()->NewString(separator ? separator : "") : nullptr; void* args[] = { sb, b, cfg, managed_3, &colorize }; CallStatic("AppendEffects", args, 5); }
        void* Crown(void* b, void* cfg, int government, int tick, int tiles, float ticksPerYear) const { void* args[] = { b, cfg, &government, &tick, &tiles, &ticksPerYear }; return CallStatic("Crown", args, 6); }
        void* Random(void* cfg, int government, int64_t nameCultures = 0L, int64_t houseCultures = 0L) const { void* args[] = { cfg, &government, &nameCultures, &houseCultures }; return CallStatic("Random", args, 4); }
    };
}
