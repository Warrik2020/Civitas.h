#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Industry
{
    class FactoryTiers : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FactoryTiers(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Industry", "FactoryTiers") {}
    public:
        bool IsFactory(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<bool>("IsFactory", __callArgs, 1); }
        void* NameOf(int t, int tier) const { void* __callArgs[] = { &t, &tier }; return CallStatic("NameOf", __callArgs, 2); }
        void* NameOf(void* b) const { void* __callArgs[] = { b }; return CallStatic("NameOf", __callArgs, 1); }
        int TechOf(int t, int tier) const { void* __callArgs[] = { &t, &tier }; return CallStaticValue<int>("TechOf", __callArgs, 2); }
        int YearOf(int t, int tier) const { void* __callArgs[] = { &t, &tier }; return CallStaticValue<int>("YearOf", __callArgs, 2); }
        int BestKnown(void* it, int t) const { void* __callArgs[] = { it, &t }; return CallStaticValue<int>("BestKnown", __callArgs, 2); }
        int ParTier(int t, int year) const { void* __callArgs[] = { &t, &year }; return CallStaticValue<int>("ParTier", __callArgs, 2); }
        float TierMul(int t, int tier, int year) const { void* __callArgs[] = { &t, &tier, &year }; return CallStaticValue<float>("TierMul", __callArgs, 3); }
        int RungOf(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<int>("RungOf", __callArgs, 1); }
        bool NextRung(int t, int& next) const { void* __callArgs[] = { &t, &next }; return CallStaticValue<bool>("NextRung", __callArgs, 2); }
        bool PrevRung(int t, int& prev) const { void* __callArgs[] = { &t, &prev }; return CallStaticValue<bool>("PrevRung", __callArgs, 2); }
        int TierCount() const { return ReadStaticField<int>("TierCount"); }
        float EaseYears() const { return ReadStaticField<float>("EaseYears"); }
    };
}
