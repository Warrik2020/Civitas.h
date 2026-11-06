#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class GeneralTraits : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GeneralTraits(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "GeneralTraits") {}
    public:
        void* At(int i) const { void* args[] = { &i }; return CallStatic("At", args, 1); }
        bool Has(int mask, int t) const { void* args[] = { &mask, &t }; return CallStaticValue<bool>("Has", args, 2); }
        bool TryGet(int t, void* def) const { void* args[] = { &t, &def }; return CallStaticValue<bool>("TryGet", args, 2); }
        void Of(int mask, void* into) const { void* args[] = { &mask, into }; CallStatic("Of", args, 2); }
        bool Fits(int mask, int t) const { void* args[] = { &mask, &t }; return CallStaticValue<bool>("Fits", args, 2); }
        int trait() const { return ReadField<int>("trait"); }
        void SetTrait(int value) const { WriteField<int>("trait", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* effect() const { return ReadField<void*>("effect"); }
        void SetEffect(void* value) const { WriteField<void*>("effect", value); }
        float attack() const { return ReadField<float>("attack"); }
        void SetAttack(float value) const { WriteField<float>("attack", value); }
        float defence() const { return ReadField<float>("defence"); }
        void SetDefence(float value) const { WriteField<float>("defence", value); }
        float planningRate() const { return ReadField<float>("planningRate"); }
        void SetPlanningRate(float value) const { WriteField<float>("planningRate", value); }
        float planningMax() const { return ReadField<float>("planningMax"); }
        void SetPlanningMax(float value) const { WriteField<float>("planningMax", value); }
        float supplyUse() const { return ReadField<float>("supplyUse"); }
        void SetSupplyUse(float value) const { WriteField<float>("supplyUse", value); }
        float speed() const { return ReadField<float>("speed"); }
        void SetSpeed(float value) const { WriteField<float>("speed", value); }
        int weight() const { return ReadField<int>("weight"); }
        void SetWeight(int value) const { WriteField<int>("weight", value); }
        int excludes() const { return ReadField<int>("excludes"); }
        void SetExcludes(int value) const { WriteField<int>("excludes", value); }
    };
}
