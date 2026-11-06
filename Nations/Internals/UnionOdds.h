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
        float Compute(void* deal, void* mgr, void* ctx, void* dst = nullptr) const { void* args[] = { deal, mgr, &ctx, dst }; return CallStaticValue<float>("Compute", args, 4); }
        float OpinionTerm(float opinionOfProposer, float opinionMax, float weight) const { void* args[] = { &opinionOfProposer, &opinionMax, &weight }; return CallStaticValue<float>("OpinionTerm", args, 3); }
        float PowerTerm(float powerProposer, float powerTarget, float weight) const { void* args[] = { &powerProposer, &powerTarget, &weight }; return CallStaticValue<float>("PowerTerm", args, 3); }
        float TemperTerm(float aggression, float weight) const { void* args[] = { &aggression, &weight }; return CallStaticValue<float>("TemperTerm", args, 2); }
        float Sum(void* terms) const { void* args[] = { terms }; return CallStaticValue<float>("Sum", args, 1); }
        void* ExtraTerms() const { return ReadStaticField<void*>("ExtraTerms"); }
        void SetExtraTerms(void* value) const { WriteStaticField<void*>("ExtraTerms", value); }
    };
}
