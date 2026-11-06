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
        void* NameOf(int s) const { void* __callArgs[] = { &s }; return CallStatic("NameOf", __callArgs, 1); }
        void* WordOf(int s) const { void* __callArgs[] = { &s }; return CallStatic("WordOf", __callArgs, 1); }
        void* NameOf(int s, int axis) const { void* __callArgs[] = { &s, &axis }; return CallStatic("NameOf", __callArgs, 2); }
        void* WordOf(int s, int axis) const { void* __callArgs[] = { &s, &axis }; return CallStatic("WordOf", __callArgs, 2); }
        void* BlurbOf(int s) const { void* __callArgs[] = { &s }; return CallStatic("BlurbOf", __callArgs, 1); }
        float GrievanceRateMul(int s) const { void* __callArgs[] = { &s }; return CallStaticValue<float>("GrievanceRateMul", __callArgs, 1); }
        float GrievanceBleedPerDay(int s) const { void* __callArgs[] = { &s }; return CallStaticValue<float>("GrievanceBleedPerDay", __callArgs, 1); }
        float UnrestFloorMul(int s) const { void* __callArgs[] = { &s }; return CallStaticValue<float>("UnrestFloorMul", __callArgs, 1); }
        float AcceptanceRest(int s) const { void* __callArgs[] = { &s }; return CallStaticValue<float>("AcceptanceRest", __callArgs, 1); }
        float TaxMul(int s) const { void* __callArgs[] = { &s }; return CallStaticValue<float>("TaxMul", __callArgs, 1); }
        float EmigrationWeight(int s) const { void* __callArgs[] = { &s }; return CallStaticValue<float>("EmigrationWeight", __callArgs, 1); }
        bool FoldsTrait(int s) const { void* __callArgs[] = { &s }; return CallStaticValue<bool>("FoldsTrait", __callArgs, 1); }
        float HomelandOpinion(int s) const { void* __callArgs[] = { &s }; return CallStaticValue<float>("HomelandOpinion", __callArgs, 1); }
        int IdeologyDefaultOf(int ideology) const { void* __callArgs[] = { &ideology }; return CallStaticValue<int>("IdeologyDefaultOf", __callArgs, 1); }
        int Clamp(int s, void* scalars) const { void* __callArgs[] = { &s, &scalars }; return CallStaticValue<int>("Clamp", __callArgs, 2); }
        bool Allowed(int s, void* scalars) const { void* __callArgs[] = { &s, &scalars }; return CallStaticValue<bool>("Allowed", __callArgs, 2); }
        int DefaultFor(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<int>("DefaultFor", __callArgs, 1); }
        int LadderDefaultFor(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<int>("LadderDefaultFor", __callArgs, 1); }
        void* AcceptanceWord(float acceptance) const { void* __callArgs[] = { &acceptance }; return CallStatic("AcceptanceWord", __callArgs, 1); }
        int Count() const { return ReadStaticField<int>("Count"); }
        void* Names() const { return ReadStaticField<void*>("Names"); }
        void* Words() const { return ReadStaticField<void*>("Words"); }
        void* Blurbs() const { return ReadStaticField<void*>("Blurbs"); }
    };
}
