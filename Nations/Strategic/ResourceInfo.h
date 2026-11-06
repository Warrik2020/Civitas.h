#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Strategic
{
    class ResourceInfo : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ResourceInfo(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Strategic", "ResourceInfo") {}
    public:
        void* Name(int k) const { void* args[] = { &k }; return CallStatic("Name", args, 1); }
        int Bit(int k) const { void* args[] = { &k }; return CallStaticValue<int>("Bit", args, 1); }
        bool Has(int m, int k) const { void* args[] = { &m, &k }; return CallStaticValue<bool>("Has", args, 2); }
        bool IsProduction(int k) const { void* args[] = { &k }; return CallStaticValue<bool>("IsProduction", args, 1); }
        bool IsField(int k) const { void* args[] = { &k }; return CallStaticValue<bool>("IsField", args, 1); }
        void* FieldUnit(int k) const { void* args[] = { &k }; return CallStatic("FieldUnit", args, 1); }
        int RelevantTechOf(int k) const { void* args[] = { &k }; return CallStaticValue<int>("RelevantTechOf", args, 1); }
        void* RelevantTechName(int k) const { void* args[] = { &k }; return CallStatic("RelevantTechName", args, 1); }
        float ExtractionMul(void* it) const { void* args[] = { it }; return CallStaticValue<float>("ExtractionMul", args, 1); }
        float BreedingMul(void* it) const { void* args[] = { it }; return CallStaticValue<float>("BreedingMul", args, 1); }
        bool CoalMakesSaltpetre(void* it) const { void* args[] = { it }; return CallStaticValue<bool>("CoalMakesSaltpetre", args, 1); }
        bool CoalMakesOil(void* it) const { void* args[] = { it }; return CallStaticValue<bool>("CoalMakesOil", args, 1); }
        int Count() const { return ReadStaticField<int>("Count"); }
        float WorksPerRichness() const { return ReadStaticField<float>("WorksPerRichness"); }
        float HorsesPerRichness() const { return ReadStaticField<float>("HorsesPerRichness"); }
        float EnginesPerRichness() const { return ReadStaticField<float>("EnginesPerRichness"); }
    };
}
