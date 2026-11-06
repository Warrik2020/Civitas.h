#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class BattleBrain : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleBrain(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "BattleBrain") {}
    public:
        bool Dispersed(void* p) const { void* args[] = { &p }; return CallStaticValue<bool>("Dispersed", args, 1); }
        float SharpShare(int level) const { void* args[] = { &level }; return CallStaticValue<float>("SharpShare", args, 1); }
        float HaplessShare(int level) const { void* args[] = { &level }; return CallStaticValue<float>("HaplessShare", args, 1); }
        void* Sharp(bool dispersed) const { void* args[] = { &dispersed }; return CallStatic("Sharp", args, 1); }
        void* Hapless(bool dispersed) const { void* args[] = { &dispersed }; return CallStatic("Hapless", args, 1); }
        void* For_(int level, bool dispersed, int body) const { void* args[] = { &level, &dispersed, &body }; return CallStatic("For", args, 3); }
        void* For_(int level, void* p, int body) const { void* args[] = { &level, &p, &body }; return CallStatic("For", args, 3); }
        void SetForHarness(int level, void* line, void* open) const { void* args[] = { &level, line, open }; CallStatic("SetForHarness", args, 3); }
        void ClearHarness() const { CallStatic("ClearHarness", nullptr, 0); }
        bool standard() const { return ReadField<bool>("standard"); }
        void SetStandard(bool value) const { WriteField<bool>("standard", value); }
        float planMul() const { return ReadField<float>("planMul"); }
        void SetPlanMul(float value) const { WriteField<float>("planMul", value); }
        float withdrawMorale() const { return ReadField<float>("withdrawMorale"); }
        void SetWithdrawMorale(float value) const { WriteField<float>("withdrawMorale", value); }
        float withdrawAliveMul() const { return ReadField<float>("withdrawAliveMul"); }
        void SetWithdrawAliveMul(float value) const { WriteField<float>("withdrawAliveMul", value); }
        float returnMorale() const { return ReadField<float>("returnMorale"); }
        void SetReturnMorale(float value) const { WriteField<float>("returnMorale", value); }
        float squareChance() const { return ReadField<float>("squareChance"); }
        void SetSquareChance(float value) const { WriteField<float>("squareChance", value); }
        float strayChance() const { return ReadField<float>("strayChance"); }
        void SetStrayChance(float value) const { WriteField<float>("strayChance", value); }
        float spread() const { return ReadField<float>("spread"); }
        void SetSpread(float value) const { WriteField<float>("spread", value); }
        float churn() const { return ReadField<float>("churn"); }
        void SetChurn(float value) const { WriteField<float>("churn", value); }
        float crowd() const { return ReadField<float>("crowd"); }
        void SetCrowd(float value) const { WriteField<float>("crowd", value); }
        float stickiness() const { return ReadField<float>("stickiness"); }
        void SetStickiness(float value) const { WriteField<float>("stickiness", value); }
        float passive() const { return ReadField<float>("passive"); }
        void SetPassive(float value) const { WriteField<float>("passive", value); }
        float pressFrac() const { return ReadField<float>("pressFrac"); }
        void SetPressFrac(float value) const { WriteField<float>("pressFrac", value); }
        bool respectsFormedFront() const { return ReadField<bool>("respectsFormedFront"); }
        void SetRespectsFormedFront(bool value) const { WriteField<bool>("respectsFormedFront", value); }
        float reserveWearMul() const { return ReadField<float>("reserveWearMul"); }
        void SetReserveWearMul(float value) const { WriteField<float>("reserveWearMul", value); }
        void* Standard() const { return ReadStaticField<void*>("Standard"); }
        int FullySharpLevel() const { return ReadStaticField<int>("FullySharpLevel"); }
    };
}
