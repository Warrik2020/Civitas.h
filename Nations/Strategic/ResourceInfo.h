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
        void* Name(int k) const { void* __callArgs[] = { &k }; return CallStatic("Name", __callArgs, 1); }
        int Bit(int k) const { void* __callArgs[] = { &k }; return CallStaticValue<int>("Bit", __callArgs, 1); }
        bool Has(int m, int k) const { void* __callArgs[] = { &m, &k }; return CallStaticValue<bool>("Has", __callArgs, 2); }
        bool IsProduction(int k) const { void* __callArgs[] = { &k }; return CallStaticValue<bool>("IsProduction", __callArgs, 1); }
        bool IsField(int k) const { void* __callArgs[] = { &k }; return CallStaticValue<bool>("IsField", __callArgs, 1); }
        void* FieldUnit(int k) const { void* __callArgs[] = { &k }; return CallStatic("FieldUnit", __callArgs, 1); }
        int RelevantTechOf(int k) const { void* __callArgs[] = { &k }; return CallStaticValue<int>("RelevantTechOf", __callArgs, 1); }
        void* RelevantTechName(int k) const { void* __callArgs[] = { &k }; return CallStatic("RelevantTechName", __callArgs, 1); }
        float ExtractionMul(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<float>("ExtractionMul", __callArgs, 1); }
        float BreedingMul(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<float>("BreedingMul", __callArgs, 1); }
        bool CoalMakesSaltpetre(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<bool>("CoalMakesSaltpetre", __callArgs, 1); }
        bool CoalMakesOil(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<bool>("CoalMakesOil", __callArgs, 1); }
        int Count() const { return ReadStaticField<int>("Count"); }
        float WorksPerRichness() const { return ReadStaticField<float>("WorksPerRichness"); }
        float HorsesPerRichness() const { return ReadStaticField<float>("HorsesPerRichness"); }
        float EnginesPerRichness() const { return ReadStaticField<float>("EnginesPerRichness"); }
    };
}
