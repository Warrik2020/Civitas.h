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
        int BandOf(float trust) const { void* args[] = { &trust }; return CallStaticValue<int>("BandOf", args, 1); }
        int NextBand(int current, float trust) const { void* args[] = { &current, &trust }; return CallStaticValue<int>("NextBand", args, 2); }
        void* Word(int b) const { void* args[] = { &b }; return CallStatic("Word", args, 1); }
        float Neglect(float trust) const { void* args[] = { &trust }; return CallStaticValue<float>("Neglect", args, 1); }
        float Content(float trust) const { void* args[] = { &trust }; return CallStaticValue<float>("Content", args, 1); }
        bool Persecuted(void* f) const { void* args[] = { &f }; return CallStaticValue<bool>("Persecuted", args, 1); }
        float NeglectLevel(void* f) const { void* args[] = { &f }; return CallStaticValue<float>("NeglectLevel", args, 1); }
        float LawMul(void* f) const { void* args[] = { &f }; return CallStaticValue<float>("LawMul", args, 1); }
        float ShareMul(float share) const { void* args[] = { &share }; return CallStaticValue<float>("ShareMul", args, 1); }
        float DecayPerMonth(void* f) const { void* args[] = { &f }; return CallStaticValue<float>("DecayPerMonth", args, 1); }
        float StartTrust(void* f) const { void* args[] = { &f }; return CallStaticValue<float>("StartTrust", args, 1); }
        float DemandYears(float share, float trust, float jitter01) const { void* args[] = { &share, &trust, &jitter01 }; return CallStaticValue<float>("DemandYears", args, 3); }
        void* Floors() const { return ReadStaticField<void*>("Floors"); }
    };
}
