#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class Standings : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Standings(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "Standings") {}
    public:
        void* NameOf(int s) const { void* args[] = { &s }; return CallStatic("NameOf", args, 1); }
        void* WordOf(int s) const { void* args[] = { &s }; return CallStatic("WordOf", args, 1); }
        void* NameOf(int s, int axis) const { void* args[] = { &s, &axis }; return CallStatic("NameOf", args, 2); }
        void* WordOf(int s, int axis) const { void* args[] = { &s, &axis }; return CallStatic("WordOf", args, 2); }
        void* BlurbOf(int s) const { void* args[] = { &s }; return CallStatic("BlurbOf", args, 1); }
        float GrievanceRateMul(int s) const { void* args[] = { &s }; return CallStaticValue<float>("GrievanceRateMul", args, 1); }
        float GrievanceBleedPerDay(int s) const { void* args[] = { &s }; return CallStaticValue<float>("GrievanceBleedPerDay", args, 1); }
        float UnrestFloorMul(int s) const { void* args[] = { &s }; return CallStaticValue<float>("UnrestFloorMul", args, 1); }
        float AcceptanceRest(int s) const { void* args[] = { &s }; return CallStaticValue<float>("AcceptanceRest", args, 1); }
        float TaxMul(int s) const { void* args[] = { &s }; return CallStaticValue<float>("TaxMul", args, 1); }
        float EmigrationWeight(int s) const { void* args[] = { &s }; return CallStaticValue<float>("EmigrationWeight", args, 1); }
        bool FoldsTrait(int s) const { void* args[] = { &s }; return CallStaticValue<bool>("FoldsTrait", args, 1); }
        float HomelandOpinion(int s) const { void* args[] = { &s }; return CallStaticValue<float>("HomelandOpinion", args, 1); }
        int IdeologyDefaultOf(int ideology) const { void* args[] = { &ideology }; return CallStaticValue<int>("IdeologyDefaultOf", args, 1); }
        int Clamp(int s, void* scalars) const { void* args[] = { &s, &scalars }; return CallStaticValue<int>("Clamp", args, 2); }
        bool Allowed(int s, void* scalars) const { void* args[] = { &s, &scalars }; return CallStaticValue<bool>("Allowed", args, 2); }
        int DefaultFor(void* it) const { void* args[] = { it }; return CallStaticValue<int>("DefaultFor", args, 1); }
        int LadderDefaultFor(void* it) const { void* args[] = { it }; return CallStaticValue<int>("LadderDefaultFor", args, 1); }
        void* AcceptanceWord(float acceptance) const { void* args[] = { &acceptance }; return CallStatic("AcceptanceWord", args, 1); }
        int Count() const { return ReadStaticField<int>("Count"); }
        void* Names() const { return ReadStaticField<void*>("Names"); }
        void* Words() const { return ReadStaticField<void*>("Words"); }
        void* Blurbs() const { return ReadStaticField<void*>("Blurbs"); }
    };
}
