#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class LogisticsSource : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LogisticsSource(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "LogisticsSource") {}
    public:
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int tile() const { return ReadField<int>("tile"); }
        void SetTile(int value) const { WriteField<int>("tile", value); }
        int cellX() const { return ReadField<int>("cellX"); }
        void SetCellX(int value) const { WriteField<int>("cellX", value); }
        int cellY() const { return ReadField<int>("cellY"); }
        void SetCellY(int value) const { WriteField<int>("cellY", value); }
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
        float effectiveness() const { return ReadField<float>("effectiveness"); }
        void SetEffectiveness(float value) const { WriteField<float>("effectiveness", value); }
    };
}
