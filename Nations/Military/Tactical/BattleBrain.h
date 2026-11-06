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
        bool Dispersed(void* p) const { void* __callArgs[] = { &p }; return CallStaticValue<bool>("Dispersed", __callArgs, 1); }
        float SharpShare(int level) const { void* __callArgs[] = { &level }; return CallStaticValue<float>("SharpShare", __callArgs, 1); }
        float HaplessShare(int level) const { void* __callArgs[] = { &level }; return CallStaticValue<float>("HaplessShare", __callArgs, 1); }
        void* Sharp(bool dispersed) const { void* __callArgs[] = { &dispersed }; return CallStatic("Sharp", __callArgs, 1); }
        void* Hapless(bool dispersed) const { void* __callArgs[] = { &dispersed }; return CallStatic("Hapless", __callArgs, 1); }
        void* For_(int level, bool dispersed, int body) const { void* __callArgs[] = { &level, &dispersed, &body }; return CallStatic("For", __callArgs, 3); }
        void* For_(int level, void* p, int body) const { void* __callArgs[] = { &level, &p, &body }; return CallStatic("For", __callArgs, 3); }
        void SetForHarness(int level, void* line, void* open) const { void* __callArgs[] = { &level, line, open }; CallStatic("SetForHarness", __callArgs, 3); }
        void ClearHarness() const { CallStatic("ClearHarness", nullptr, 0); }
        bool standard() const { return ReadField<bool>("standard"); }
        void standard(bool value) const { WriteField<bool>("standard", value); }
        float planMul() const { return ReadField<float>("planMul"); }
        void planMul(float value) const { WriteField<float>("planMul", value); }
        float withdrawMorale() const { return ReadField<float>("withdrawMorale"); }
        void withdrawMorale(float value) const { WriteField<float>("withdrawMorale", value); }
        float withdrawAliveMul() const { return ReadField<float>("withdrawAliveMul"); }
        void withdrawAliveMul(float value) const { WriteField<float>("withdrawAliveMul", value); }
        float returnMorale() const { return ReadField<float>("returnMorale"); }
        void returnMorale(float value) const { WriteField<float>("returnMorale", value); }
        float squareChance() const { return ReadField<float>("squareChance"); }
        void squareChance(float value) const { WriteField<float>("squareChance", value); }
        float strayChance() const { return ReadField<float>("strayChance"); }
        void strayChance(float value) const { WriteField<float>("strayChance", value); }
        float spread() const { return ReadField<float>("spread"); }
        void spread(float value) const { WriteField<float>("spread", value); }
        float churn() const { return ReadField<float>("churn"); }
        void churn(float value) const { WriteField<float>("churn", value); }
        float crowd() const { return ReadField<float>("crowd"); }
        void crowd(float value) const { WriteField<float>("crowd", value); }
        float stickiness() const { return ReadField<float>("stickiness"); }
        void stickiness(float value) const { WriteField<float>("stickiness", value); }
        float passive() const { return ReadField<float>("passive"); }
        void passive(float value) const { WriteField<float>("passive", value); }
        float pressFrac() const { return ReadField<float>("pressFrac"); }
        void pressFrac(float value) const { WriteField<float>("pressFrac", value); }
        bool respectsFormedFront() const { return ReadField<bool>("respectsFormedFront"); }
        void respectsFormedFront(bool value) const { WriteField<bool>("respectsFormedFront", value); }
        float reserveWearMul() const { return ReadField<float>("reserveWearMul"); }
        void reserveWearMul(float value) const { WriteField<float>("reserveWearMul", value); }
        void* Standard() const { return ReadStaticField<void*>("Standard"); }
        int FullySharpLevel() const { return ReadStaticField<int>("FullySharpLevel"); }
    };
}
