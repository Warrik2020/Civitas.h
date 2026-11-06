#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class CityLogisticsTerms : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CityLogisticsTerms(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "CityLogisticsTerms") {}
    public:
        bool valid() const { return ReadField<bool>("valid"); }
        void SetValid(bool value) const { WriteField<bool>("valid", value); }
        float output() const { return ReadField<float>("output"); }
        void SetOutput(float value) const { WriteField<float>("output", value); }
        float baseTerm() const { return ReadField<float>("baseTerm"); }
        void SetBaseTerm(float value) const { WriteField<float>("baseTerm", value); }
        float popTerm() const { return ReadField<float>("popTerm"); }
        void SetPopTerm(float value) const { WriteField<float>("popTerm", value); }
        float traitMul() const { return ReadField<float>("traitMul"); }
        void SetTraitMul(float value) const { WriteField<float>("traitMul", value); }
        float techMul() const { return ReadField<float>("techMul"); }
        void SetTechMul(float value) const { WriteField<float>("techMul", value); }
        float blockMul() const { return ReadField<float>("blockMul"); }
        void SetBlockMul(float value) const { WriteField<float>("blockMul", value); }
        float reachHighwayTiles() const { return ReadField<float>("reachHighwayTiles"); }
        void SetReachHighwayTiles(float value) const { WriteField<float>("reachHighwayTiles", value); }
        float reachOpenTiles() const { return ReadField<float>("reachOpenTiles"); }
        void SetReachOpenTiles(float value) const { WriteField<float>("reachOpenTiles", value); }
    };
}
