#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class UnitParams : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnitParams(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "UnitParams") {}
    public:
        float range() const { return ReadField<float>("range"); }
        void SetRange(float value) const { WriteField<float>("range", value); }
        float d50() const { return ReadField<float>("d50"); }
        void SetD50(float value) const { WriteField<float>("d50", value); }
        float acc0() const { return ReadField<float>("acc0"); }
        void SetAcc0(float value) const { WriteField<float>("acc0", value); }
        int reloadSteps() const { return ReadField<int>("reloadSteps"); }
        void SetReloadSteps(int value) const { WriteField<int>("reloadSteps", value); }
        int aimSteps() const { return ReadField<int>("aimSteps"); }
        void SetAimSteps(int value) const { WriteField<int>("aimSteps", value); }
        float projTiles() const { return ReadField<float>("projTiles"); }
        void SetProjTiles(float value) const { WriteField<float>("projTiles", value); }
        float suppPower() const { return ReadField<float>("suppPower"); }
        void SetSuppPower(float value) const { WriteField<float>("suppPower", value); }
        float suppRadius() const { return ReadField<float>("suppRadius"); }
        void SetSuppRadius(float value) const { WriteField<float>("suppRadius", value); }
        float walkFireMul() const { return ReadField<float>("walkFireMul"); }
        void SetWalkFireMul(float value) const { WriteField<float>("walkFireMul", value); }
        float tracerShare() const { return ReadField<float>("tracerShare"); }
        void SetTracerShare(float value) const { WriteField<float>("tracerShare", value); }
        float mgAcc0() const { return ReadField<float>("mgAcc0"); }
        void SetMgAcc0(float value) const { WriteField<float>("mgAcc0", value); }
        int mgReloadSteps() const { return ReadField<int>("mgReloadSteps"); }
        void SetMgReloadSteps(int value) const { WriteField<int>("mgReloadSteps", value); }
        int mgBurst() const { return ReadField<int>("mgBurst"); }
        void SetMgBurst(int value) const { WriteField<int>("mgBurst", value); }
        float mgSuppPower() const { return ReadField<float>("mgSuppPower"); }
        void SetMgSuppPower(float value) const { WriteField<float>("mgSuppPower", value); }
        float meleeHit() const { return ReadField<float>("meleeHit"); }
        void SetMeleeHit(float value) const { WriteField<float>("meleeHit", value); }
        int swingSteps() const { return ReadField<int>("swingSteps"); }
        void SetSwingSteps(int value) const { WriteField<int>("swingSteps", value); }
        float reach() const { return ReadField<float>("reach"); }
        void SetReach(float value) const { WriteField<float>("reach", value); }
        float stiffness() const { return ReadField<float>("stiffness"); }
        void SetStiffness(float value) const { WriteField<float>("stiffness", value); }
        float leash() const { return ReadField<float>("leash"); }
        void SetLeash(float value) const { WriteField<float>("leash", value); }
        float walk() const { return ReadField<float>("walk"); }
        void SetWalk(float value) const { WriteField<float>("walk", value); }
        float run() const { return ReadField<float>("run"); }
        void SetRun(float value) const { WriteField<float>("run", value); }
        float charge() const { return ReadField<float>("charge"); }
        void SetCharge(float value) const { WriteField<float>("charge", value); }
        float accel() const { return ReadField<float>("accel"); }
        void SetAccel(float value) const { WriteField<float>("accel", value); }
        float turnRad() const { return ReadField<float>("turnRad"); }
        void SetTurnRad(float value) const { WriteField<float>("turnRad", value); }
        float body() const { return ReadField<float>("body"); }
        void SetBody(float value) const { WriteField<float>("body", value); }
        float suppGain() const { return ReadField<float>("suppGain"); }
        void SetSuppGain(float value) const { WriteField<float>("suppGain", value); }
        float fearGain() const { return ReadField<float>("fearGain"); }
        void SetFearGain(float value) const { WriteField<float>("fearGain", value); }
        float engageFrac() const { return ReadField<float>("engageFrac"); }
        void SetEngageFrac(float value) const { WriteField<float>("engageFrac", value); }
        float armour() const { return ReadField<float>("armour"); }
        void SetArmour(float value) const { WriteField<float>("armour", value); }
        uint8_t cls() const { return ReadField<uint8_t>("cls"); }
        void SetCls(uint8_t value) const { WriteField<uint8_t>("cls", value); }
        uint8_t age() const { return ReadField<uint8_t>("age"); }
        void SetAge(uint8_t value) const { WriteField<uint8_t>("age", value); }
        uint8_t posturePolicy() const { return ReadField<uint8_t>("posturePolicy"); }
        void SetPosturePolicy(uint8_t value) const { WriteField<uint8_t>("posturePolicy", value); }
        uint8_t fireRanks() const { return ReadField<uint8_t>("fireRanks"); }
        void SetFireRanks(uint8_t value) const { WriteField<uint8_t>("fireRanks", value); }
        uint8_t meleeRanks() const { return ReadField<uint8_t>("meleeRanks"); }
        void SetMeleeRanks(uint8_t value) const { WriteField<uint8_t>("meleeRanks", value); }
        uint8_t arcing() const { return ReadField<uint8_t>("arcing"); }
        void SetArcing(uint8_t value) const { WriteField<uint8_t>("arcing", value); }
        uint8_t dispersed() const { return ReadField<uint8_t>("dispersed"); }
        void SetDispersed(uint8_t value) const { WriteField<uint8_t>("dispersed", value); }
        uint8_t braces() const { return ReadField<uint8_t>("braces"); }
        void SetBraces(uint8_t value) const { WriteField<uint8_t>("braces", value); }
        uint8_t shield() const { return ReadField<uint8_t>("shield"); }
        void SetShield(uint8_t value) const { WriteField<uint8_t>("shield", value); }
        uint8_t mounted() const { return ReadField<uint8_t>("mounted"); }
        void SetMounted(uint8_t value) const { WriteField<uint8_t>("mounted", value); }
        uint8_t vehicle() const { return ReadField<uint8_t>("vehicle"); }
        void SetVehicle(uint8_t value) const { WriteField<uint8_t>("vehicle", value); }
        uint8_t pad() const { return ReadField<uint8_t>("pad"); }
        void SetPad(uint8_t value) const { WriteField<uint8_t>("pad", value); }
    };
}
