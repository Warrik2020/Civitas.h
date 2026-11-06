#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class Treatments : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Treatments(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "Treatments") {}
    public:
        bool IsRung(int t) const { void* args[] = { &t }; return CallStaticValue<bool>("IsRung", args, 1); }
        bool Ousts(int t) const { void* args[] = { &t }; return CallStaticValue<bool>("Ousts", args, 1); }
        int Severity(int t) const { void* args[] = { &t }; return CallStaticValue<int>("Severity", args, 1); }
        bool IsHarsher(int a, int than) const { void* args[] = { &a, &than }; return CallStaticValue<bool>("IsHarsher", args, 2); }
        int ToStanding(int t) const { void* args[] = { &t }; return CallStaticValue<int>("ToStanding", args, 1); }
        int FromStanding(int s) const { void* args[] = { &s }; return CallStaticValue<int>("FromStanding", args, 1); }
        int Effective(int realm, int zone, bool inZone) const { void* args[] = { &realm, &zone, &inZone }; return CallStaticValue<int>("Effective", args, 3); }
        uint8_t KernelByte(int t) const { void* args[] = { &t }; return CallStaticValue<uint8_t>("KernelByte", args, 1); }
        int FromKernelByte(uint8_t b) const { void* args[] = { &b }; return CallStaticValue<int>("FromKernelByte", args, 1); }
        void* NameOf(int t) const { void* args[] = { &t }; return CallStatic("NameOf", args, 1); }
        void* WordOf(int t) const { void* args[] = { &t }; return CallStatic("WordOf", args, 1); }
        float CooldownWeightOf(int t) const { void* args[] = { &t }; return CallStaticValue<float>("CooldownWeightOf", args, 1); }
        int FromInt(int v, int fallback) const { void* args[] = { &v, &fallback }; return CallStaticValue<int>("FromInt", args, 2); }
        int StepMilder(int t) const { void* args[] = { &t }; return CallStaticValue<int>("StepMilder", args, 1); }
        int StepHarsherInLaw(int t) const { void* args[] = { &t }; return CallStaticValue<int>("StepHarsherInLaw", args, 1); }
        void* Gate(void* g) const { void* args[] = { &g }; return CallStatic("Gate", args, 1); }
        int NormalizedRealm(int t, bool accepted) const { void* args[] = { &t, &accepted }; return CallStaticValue<int>("NormalizedRealm", args, 2); }
        int NextHarshUntil(int harshUntilTick, int now, float cooldownYears, float ticksPerYear) const { void* args[] = { &harshUntilTick, &now, &cooldownYears, &ticksPerYear }; return CallStaticValue<int>("NextHarshUntil", args, 4); }
        int Count() const { return ReadStaticField<int>("Count"); }
        void* Names() const { return ReadStaticField<void*>("Names"); }
        void* Words() const { return ReadStaticField<void*>("Words"); }
        void* SameName() const { return ReadStaticField<void*>("SameName"); }
    };
}
