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
        void range(float value) const { WriteField<float>("range", value); }
        float d50() const { return ReadField<float>("d50"); }
        void d50(float value) const { WriteField<float>("d50", value); }
        float acc0() const { return ReadField<float>("acc0"); }
        void acc0(float value) const { WriteField<float>("acc0", value); }
        int reloadSteps() const { return ReadField<int>("reloadSteps"); }
        void reloadSteps(int value) const { WriteField<int>("reloadSteps", value); }
        int aimSteps() const { return ReadField<int>("aimSteps"); }
        void aimSteps(int value) const { WriteField<int>("aimSteps", value); }
        float projTiles() const { return ReadField<float>("projTiles"); }
        void projTiles(float value) const { WriteField<float>("projTiles", value); }
        float suppPower() const { return ReadField<float>("suppPower"); }
        void suppPower(float value) const { WriteField<float>("suppPower", value); }
        float suppRadius() const { return ReadField<float>("suppRadius"); }
        void suppRadius(float value) const { WriteField<float>("suppRadius", value); }
        float walkFireMul() const { return ReadField<float>("walkFireMul"); }
        void walkFireMul(float value) const { WriteField<float>("walkFireMul", value); }
        float tracerShare() const { return ReadField<float>("tracerShare"); }
        void tracerShare(float value) const { WriteField<float>("tracerShare", value); }
        float mgAcc0() const { return ReadField<float>("mgAcc0"); }
        void mgAcc0(float value) const { WriteField<float>("mgAcc0", value); }
        int mgReloadSteps() const { return ReadField<int>("mgReloadSteps"); }
        void mgReloadSteps(int value) const { WriteField<int>("mgReloadSteps", value); }
        int mgBurst() const { return ReadField<int>("mgBurst"); }
        void mgBurst(int value) const { WriteField<int>("mgBurst", value); }
        float mgSuppPower() const { return ReadField<float>("mgSuppPower"); }
        void mgSuppPower(float value) const { WriteField<float>("mgSuppPower", value); }
        float meleeHit() const { return ReadField<float>("meleeHit"); }
        void meleeHit(float value) const { WriteField<float>("meleeHit", value); }
        int swingSteps() const { return ReadField<int>("swingSteps"); }
        void swingSteps(int value) const { WriteField<int>("swingSteps", value); }
        float reach() const { return ReadField<float>("reach"); }
        void reach(float value) const { WriteField<float>("reach", value); }
        float stiffness() const { return ReadField<float>("stiffness"); }
        void stiffness(float value) const { WriteField<float>("stiffness", value); }
        float leash() const { return ReadField<float>("leash"); }
        void leash(float value) const { WriteField<float>("leash", value); }
        float walk() const { return ReadField<float>("walk"); }
        void walk(float value) const { WriteField<float>("walk", value); }
        float run() const { return ReadField<float>("run"); }
        void run(float value) const { WriteField<float>("run", value); }
        float charge() const { return ReadField<float>("charge"); }
        void charge(float value) const { WriteField<float>("charge", value); }
        float accel() const { return ReadField<float>("accel"); }
        void accel(float value) const { WriteField<float>("accel", value); }
        float turnRad() const { return ReadField<float>("turnRad"); }
        void turnRad(float value) const { WriteField<float>("turnRad", value); }
        float body() const { return ReadField<float>("body"); }
        void body(float value) const { WriteField<float>("body", value); }
        float suppGain() const { return ReadField<float>("suppGain"); }
        void suppGain(float value) const { WriteField<float>("suppGain", value); }
        float fearGain() const { return ReadField<float>("fearGain"); }
        void fearGain(float value) const { WriteField<float>("fearGain", value); }
        float engageFrac() const { return ReadField<float>("engageFrac"); }
        void engageFrac(float value) const { WriteField<float>("engageFrac", value); }
        float armour() const { return ReadField<float>("armour"); }
        void armour(float value) const { WriteField<float>("armour", value); }
        uint8_t cls() const { return ReadField<uint8_t>("cls"); }
        void cls(uint8_t value) const { WriteField<uint8_t>("cls", value); }
        uint8_t age() const { return ReadField<uint8_t>("age"); }
        void age(uint8_t value) const { WriteField<uint8_t>("age", value); }
        uint8_t posturePolicy() const { return ReadField<uint8_t>("posturePolicy"); }
        void posturePolicy(uint8_t value) const { WriteField<uint8_t>("posturePolicy", value); }
        uint8_t fireRanks() const { return ReadField<uint8_t>("fireRanks"); }
        void fireRanks(uint8_t value) const { WriteField<uint8_t>("fireRanks", value); }
        uint8_t meleeRanks() const { return ReadField<uint8_t>("meleeRanks"); }
        void meleeRanks(uint8_t value) const { WriteField<uint8_t>("meleeRanks", value); }
        uint8_t arcing() const { return ReadField<uint8_t>("arcing"); }
        void arcing(uint8_t value) const { WriteField<uint8_t>("arcing", value); }
        uint8_t dispersed() const { return ReadField<uint8_t>("dispersed"); }
        void dispersed(uint8_t value) const { WriteField<uint8_t>("dispersed", value); }
        uint8_t braces() const { return ReadField<uint8_t>("braces"); }
        void braces(uint8_t value) const { WriteField<uint8_t>("braces", value); }
        uint8_t shield() const { return ReadField<uint8_t>("shield"); }
        void shield(uint8_t value) const { WriteField<uint8_t>("shield", value); }
        uint8_t mounted() const { return ReadField<uint8_t>("mounted"); }
        void mounted(uint8_t value) const { WriteField<uint8_t>("mounted", value); }
        uint8_t vehicle() const { return ReadField<uint8_t>("vehicle"); }
        void vehicle(uint8_t value) const { WriteField<uint8_t>("vehicle", value); }
        uint8_t pad() const { return ReadField<uint8_t>("pad"); }
        void pad(uint8_t value) const { WriteField<uint8_t>("pad", value); }
    };
}
