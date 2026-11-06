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
        bool IsFactory(int t) const { void* args[] = { &t }; return CallStaticValue<bool>("IsFactory", args, 1); }
        void* NameOf(int t, int tier) const { void* args[] = { &t, &tier }; return CallStatic("NameOf", args, 2); }
        void* NameOf(void* b) const { void* args[] = { b }; return CallStatic("NameOf", args, 1); }
        int TechOf(int t, int tier) const { void* args[] = { &t, &tier }; return CallStaticValue<int>("TechOf", args, 2); }
        int YearOf(int t, int tier) const { void* args[] = { &t, &tier }; return CallStaticValue<int>("YearOf", args, 2); }
        int BestKnown(void* it, int t) const { void* args[] = { it, &t }; return CallStaticValue<int>("BestKnown", args, 2); }
        int ParTier(int t, int year) const { void* args[] = { &t, &year }; return CallStaticValue<int>("ParTier", args, 2); }
        float TierMul(int t, int tier, int year) const { void* args[] = { &t, &tier, &year }; return CallStaticValue<float>("TierMul", args, 3); }
        int RungOf(int t) const { void* args[] = { &t }; return CallStaticValue<int>("RungOf", args, 1); }
        bool NextRung(int t, int& next) const { void* args[] = { &t, &next }; return CallStaticValue<bool>("NextRung", args, 2); }
        bool PrevRung(int t, int& prev) const { void* args[] = { &t, &prev }; return CallStaticValue<bool>("PrevRung", args, 2); }
        int TierCount() const { return ReadStaticField<int>("TierCount"); }
        float EaseYears() const { return ReadStaticField<float>("EaseYears"); }
    };
}
