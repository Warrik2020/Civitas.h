#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Nobility
{
    class NobleTerms : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NobleTerms(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Nobility", "NobleTerms") {}
    public:
        float Wanted(float ambition) const { void* args[] = { &ambition }; return CallStaticValue<float>("Wanted", args, 1); }
        void* OpinionTermsOf(void* x, void* cfg) const { void* args[] = { &x, cfg }; return CallStatic("OpinionTermsOf", args, 2); }
        float TaxMul(float opinion, void* cfg) const { void* args[] = { &opinion, cfg }; return CallStaticValue<float>("TaxMul", args, 2); }
        float ManpowerMul(float opinion, void* cfg) const { void* args[] = { &opinion, cfg }; return CallStaticValue<float>("ManpowerMul", args, 2); }
        float GiftCost(int tiles, void* cfg) const { void* args[] = { &tiles, cfg }; return CallStaticValue<float>("GiftCost", args, 2); }
        float Baseline() const { return ReadStaticField<float>("Baseline"); }
    };
}
