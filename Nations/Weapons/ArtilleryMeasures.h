#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class ArtilleryMeasures : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ArtilleryMeasures(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "ArtilleryMeasures") {}
    public:
        int partCount() const { return ReadField<int>("partCount"); }
        void SetPartCount(int value) const { WriteField<int>("partCount", value); }
        int wheels() const { return ReadField<int>("wheels"); }
        void SetWheels(int value) const { WriteField<int>("wheels", value); }
        bool hasTube() const { return ReadField<bool>("hasTube"); }
        void SetHasTube(bool value) const { WriteField<bool>("hasTube", value); }
        bool hasBreech() const { return ReadField<bool>("hasBreech"); }
        void SetHasBreech(bool value) const { WriteField<bool>("hasBreech", value); }
        bool hasCarriage() const { return ReadField<bool>("hasCarriage"); }
        void SetHasCarriage(bool value) const { WriteField<bool>("hasCarriage", value); }
        bool hasTrail() const { return ReadField<bool>("hasTrail"); }
        void SetHasTrail(bool value) const { WriteField<bool>("hasTrail", value); }
        bool hasRecoil() const { return ReadField<bool>("hasRecoil"); }
        void SetHasRecoil(bool value) const { WriteField<bool>("hasRecoil", value); }
        bool hasShield() const { return ReadField<bool>("hasShield"); }
        void SetHasShield(bool value) const { WriteField<bool>("hasShield", value); }
        bool hasFrame() const { return ReadField<bool>("hasFrame"); }
        void SetHasFrame(bool value) const { WriteField<bool>("hasFrame", value); }
        bool hasArm() const { return ReadField<bool>("hasArm"); }
        void SetHasArm(bool value) const { WriteField<bool>("hasArm", value); }
        bool hasSkein() const { return ReadField<bool>("hasSkein"); }
        void SetHasSkein(bool value) const { WriteField<bool>("hasSkein", value); }
        bool hasCounterweight() const { return ReadField<bool>("hasCounterweight"); }
        void SetHasCounterweight(bool value) const { WriteField<bool>("hasCounterweight", value); }
        bool hasSling() const { return ReadField<bool>("hasSling"); }
        void SetHasSling(bool value) const { WriteField<bool>("hasSling", value); }
        float tubeLen() const { return ReadField<float>("tubeLen"); }
        void SetTubeLen(float value) const { WriteField<float>("tubeLen", value); }
        float tubeOuterDia() const { return ReadField<float>("tubeOuterDia"); }
        void SetTubeOuterDia(float value) const { WriteField<float>("tubeOuterDia", value); }
        float tubeKg() const { return ReadField<float>("tubeKg"); }
        void SetTubeKg(float value) const { WriteField<float>("tubeKg", value); }
        int tubeMaterial() const { return ReadField<int>("tubeMaterial"); }
        void SetTubeMaterial(int value) const { WriteField<int>("tubeMaterial", value); }
        float armLen() const { return ReadField<float>("armLen"); }
        void SetArmLen(float value) const { WriteField<float>("armLen", value); }
        float skeinLitres() const { return ReadField<float>("skeinLitres"); }
        void SetSkeinLitres(float value) const { WriteField<float>("skeinLitres", value); }
        float counterweightKg() const { return ReadField<float>("counterweightKg"); }
        void SetCounterweightKg(float value) const { WriteField<float>("counterweightKg", value); }
        float bodyKg() const { return ReadField<float>("bodyKg"); }
        void SetBodyKg(float value) const { WriteField<float>("bodyKg", value); }
        bool tubeOnCarriage() const { return ReadField<bool>("tubeOnCarriage"); }
        void SetTubeOnCarriage(bool value) const { WriteField<bool>("tubeOnCarriage", value); }
    };
}
