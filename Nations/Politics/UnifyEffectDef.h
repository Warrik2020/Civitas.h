#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class UnifyEffectDef : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnifyEffectDef(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "UnifyEffectDef") {}
    public:
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int scope() const { return ReadField<int>("scope"); }
        void SetScope(int value) const { WriteField<int>("scope", value); }
        float lo() const { return ReadField<float>("lo"); }
        void SetLo(float value) const { WriteField<float>("lo", value); }
        float hi() const { return ReadField<float>("hi"); }
        void SetHi(float value) const { WriteField<float>("hi", value); }
        float weight() const { return ReadField<float>("weight"); }
        void SetWeight(float value) const { WriteField<float>("weight", value); }
        void* cond() const { return ReadField<void*>("cond"); }
        int line() const { return ReadField<int>("line"); }
        void SetLine(int value) const { WriteField<int>("line", value); }
    };
}
