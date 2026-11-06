#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class UnionOdds : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnionOdds(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "UnionOdds") {}
    public:
        float Compute(void* deal, void* mgr, void* ctx, void* dst = nullptr) const { void* __callArgs[] = { deal, mgr, &ctx, dst }; return CallStaticValue<float>("Compute", __callArgs, 4); }
        float OpinionTerm(float opinionOfProposer, float opinionMax, float weight) const { void* __callArgs[] = { &opinionOfProposer, &opinionMax, &weight }; return CallStaticValue<float>("OpinionTerm", __callArgs, 3); }
        float PowerTerm(float powerProposer, float powerTarget, float weight) const { void* __callArgs[] = { &powerProposer, &powerTarget, &weight }; return CallStaticValue<float>("PowerTerm", __callArgs, 3); }
        float TemperTerm(float aggression, float weight) const { void* __callArgs[] = { &aggression, &weight }; return CallStaticValue<float>("TemperTerm", __callArgs, 2); }
        float Sum(void* terms) const { void* __callArgs[] = { terms }; return CallStaticValue<float>("Sum", __callArgs, 1); }
        void* ExtraTerms() const { return ReadStaticField<void*>("ExtraTerms"); }
        void ExtraTerms(void* value) const { WriteStaticField<void*>("ExtraTerms", value); }
    };
}
