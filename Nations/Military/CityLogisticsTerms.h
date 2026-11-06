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
        void valid(bool value) const { WriteField<bool>("valid", value); }
        float output() const { return ReadField<float>("output"); }
        void output(float value) const { WriteField<float>("output", value); }
        float baseTerm() const { return ReadField<float>("baseTerm"); }
        void baseTerm(float value) const { WriteField<float>("baseTerm", value); }
        float popTerm() const { return ReadField<float>("popTerm"); }
        void popTerm(float value) const { WriteField<float>("popTerm", value); }
        float traitMul() const { return ReadField<float>("traitMul"); }
        void traitMul(float value) const { WriteField<float>("traitMul", value); }
        float techMul() const { return ReadField<float>("techMul"); }
        void techMul(float value) const { WriteField<float>("techMul", value); }
        float blockMul() const { return ReadField<float>("blockMul"); }
        void blockMul(float value) const { WriteField<float>("blockMul", value); }
        float reachHighwayTiles() const { return ReadField<float>("reachHighwayTiles"); }
        void reachHighwayTiles(float value) const { WriteField<float>("reachHighwayTiles", value); }
        float reachOpenTiles() const { return ReadField<float>("reachOpenTiles"); }
        void reachOpenTiles(float value) const { WriteField<float>("reachOpenTiles", value); }
    };
}
