#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::States
{
    class StateTerms : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StateTerms(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.States", "StateTerms") {}
    public:
        void* LoyaltyTermsOf(void* x, void* cfg) const { void* args[] = { &x, cfg }; return CallStatic("LoyaltyTermsOf", args, 2); }
        float RemittedTaxShare(float loyalty, int standing, float taxShareMul, float standingTaxMul, float lapsedShare, void* cfg) const { void* args[] = { &loyalty, &standing, &taxShareMul, &standingTaxMul, &lapsedShare, cfg }; return CallStaticValue<float>("RemittedTaxShare", args, 6); }
        float AdminTileMul(float settled, bool occupied, float occupationAdminMul, float unsettledAdminSurcharge) const { void* args[] = { &settled, &occupied, &occupationAdminMul, &unsettledAdminSurcharge }; return CallStaticValue<float>("AdminTileMul", args, 4); }
        float LordTenureYears(void* lord) const { void* args[] = { lord }; return CallStaticValue<float>("LordTenureYears", args, 1); }
        float BorderWarStrain() const { return ReadStaticField<float>("BorderWarStrain"); }
        float UnhappinessWeight() const { return ReadStaticField<float>("UnhappinessWeight"); }
    };
}
