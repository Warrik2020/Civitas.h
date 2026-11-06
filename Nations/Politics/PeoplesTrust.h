#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class PeoplesTrust : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeoplesTrust(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "PeoplesTrust") {}
    public:
        int BandOf(float trust) const { void* __callArgs[] = { &trust }; return CallStaticValue<int>("BandOf", __callArgs, 1); }
        int NextBand(int current, float trust) const { void* __callArgs[] = { &current, &trust }; return CallStaticValue<int>("NextBand", __callArgs, 2); }
        void* Word(int b) const { void* __callArgs[] = { &b }; return CallStatic("Word", __callArgs, 1); }
        float Neglect(float trust) const { void* __callArgs[] = { &trust }; return CallStaticValue<float>("Neglect", __callArgs, 1); }
        float Content(float trust) const { void* __callArgs[] = { &trust }; return CallStaticValue<float>("Content", __callArgs, 1); }
        bool Persecuted(void* f) const { void* __callArgs[] = { &f }; return CallStaticValue<bool>("Persecuted", __callArgs, 1); }
        float NeglectLevel(void* f) const { void* __callArgs[] = { &f }; return CallStaticValue<float>("NeglectLevel", __callArgs, 1); }
        float LawMul(void* f) const { void* __callArgs[] = { &f }; return CallStaticValue<float>("LawMul", __callArgs, 1); }
        float ShareMul(float share) const { void* __callArgs[] = { &share }; return CallStaticValue<float>("ShareMul", __callArgs, 1); }
        float DecayPerMonth(void* f) const { void* __callArgs[] = { &f }; return CallStaticValue<float>("DecayPerMonth", __callArgs, 1); }
        float StartTrust(void* f) const { void* __callArgs[] = { &f }; return CallStaticValue<float>("StartTrust", __callArgs, 1); }
        float DemandYears(float share, float trust, float jitter01) const { void* __callArgs[] = { &share, &trust, &jitter01 }; return CallStaticValue<float>("DemandYears", __callArgs, 3); }
        void* Floors() const { return ReadStaticField<void*>("Floors"); }
    };
}
