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
        void kind(int value) const { WriteField<int>("kind", value); }
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        int tile() const { return ReadField<int>("tile"); }
        void tile(int value) const { WriteField<int>("tile", value); }
        int cellX() const { return ReadField<int>("cellX"); }
        void cellX(int value) const { WriteField<int>("cellX", value); }
        int cellY() const { return ReadField<int>("cellY"); }
        void cellY(int value) const { WriteField<int>("cellY", value); }
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
        float effectiveness() const { return ReadField<float>("effectiveness"); }
        void effectiveness(float value) const { WriteField<float>("effectiveness", value); }
    };
}
