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
        bool IsRung(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<bool>("IsRung", __callArgs, 1); }
        bool Ousts(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<bool>("Ousts", __callArgs, 1); }
        int Severity(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<int>("Severity", __callArgs, 1); }
        bool IsHarsher(int a, int than) const { void* __callArgs[] = { &a, &than }; return CallStaticValue<bool>("IsHarsher", __callArgs, 2); }
        int ToStanding(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<int>("ToStanding", __callArgs, 1); }
        int FromStanding(int s) const { void* __callArgs[] = { &s }; return CallStaticValue<int>("FromStanding", __callArgs, 1); }
        int Effective(int realm, int zone, bool inZone) const { void* __callArgs[] = { &realm, &zone, &inZone }; return CallStaticValue<int>("Effective", __callArgs, 3); }
        uint8_t KernelByte(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<uint8_t>("KernelByte", __callArgs, 1); }
        int FromKernelByte(uint8_t b) const { void* __callArgs[] = { &b }; return CallStaticValue<int>("FromKernelByte", __callArgs, 1); }
        void* NameOf(int t) const { void* __callArgs[] = { &t }; return CallStatic("NameOf", __callArgs, 1); }
        void* WordOf(int t) const { void* __callArgs[] = { &t }; return CallStatic("WordOf", __callArgs, 1); }
        float CooldownWeightOf(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<float>("CooldownWeightOf", __callArgs, 1); }
        int FromInt(int v, int fallback) const { void* __callArgs[] = { &v, &fallback }; return CallStaticValue<int>("FromInt", __callArgs, 2); }
        int StepMilder(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<int>("StepMilder", __callArgs, 1); }
        int StepHarsherInLaw(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<int>("StepHarsherInLaw", __callArgs, 1); }
        void* Gate(void* g) const { void* __callArgs[] = { &g }; return CallStatic("Gate", __callArgs, 1); }
        int NormalizedRealm(int t, bool accepted) const { void* __callArgs[] = { &t, &accepted }; return CallStaticValue<int>("NormalizedRealm", __callArgs, 2); }
        int NextHarshUntil(int harshUntilTick, int now, float cooldownYears, float ticksPerYear) const { void* __callArgs[] = { &harshUntilTick, &now, &cooldownYears, &ticksPerYear }; return CallStaticValue<int>("NextHarshUntil", __callArgs, 4); }
        int Count() const { return ReadStaticField<int>("Count"); }
        void* Names() const { return ReadStaticField<void*>("Names"); }
        void* Words() const { return ReadStaticField<void*>("Words"); }
        void* SameName() const { return ReadStaticField<void*>("SameName"); }
    };
}
