#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class LocalStoryRelevance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LocalStoryRelevance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "LocalStoryRelevance") {}
    public:
        void SetTicksPerDay(float tpd) const { void* __callArgs[] = { &tpd }; Call("SetTicksPerDay", __callArgs, 1); }
        void Reset() const { Call("Reset", nullptr, 0); }
        void* Classify(void* f) const { void* __callArgs[] = { &f }; return CallStatic("Classify", __callArgs, 1); }
        void* Decide(void* f) const { void* __callArgs[] = { &f }; return Call("Decide", __callArgs, 1); }
        int Tier2PerArcTicks() const { return ReadField<int>("Tier2PerArcTicks"); }
        void Tier2PerArcTicks(int value) const { WriteField<int>("Tier2PerArcTicks", value); }
        int Tier2WorldTicks() const { return ReadField<int>("Tier2WorldTicks"); }
        void Tier2WorldTicks(int value) const { WriteField<int>("Tier2WorldTicks", value); }
        int Tier1RepeatTicks() const { return ReadField<int>("Tier1RepeatTicks"); }
        void Tier1RepeatTicks(int value) const { WriteField<int>("Tier1RepeatTicks", value); }
    };
}
