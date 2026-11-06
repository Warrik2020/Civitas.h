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
        float Wanted(float ambition) const { void* __callArgs[] = { &ambition }; return CallStaticValue<float>("Wanted", __callArgs, 1); }
        void* OpinionTermsOf(void* x, void* cfg) const { void* __callArgs[] = { &x, cfg }; return CallStatic("OpinionTermsOf", __callArgs, 2); }
        float TaxMul(float opinion, void* cfg) const { void* __callArgs[] = { &opinion, cfg }; return CallStaticValue<float>("TaxMul", __callArgs, 2); }
        float ManpowerMul(float opinion, void* cfg) const { void* __callArgs[] = { &opinion, cfg }; return CallStaticValue<float>("ManpowerMul", __callArgs, 2); }
        float GiftCost(int tiles, void* cfg) const { void* __callArgs[] = { &tiles, cfg }; return CallStaticValue<float>("GiftCost", __callArgs, 2); }
        float Baseline() const { return ReadStaticField<float>("Baseline"); }
    };
}
