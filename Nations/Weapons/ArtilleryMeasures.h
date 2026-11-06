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
        void partCount(int value) const { WriteField<int>("partCount", value); }
        int wheels() const { return ReadField<int>("wheels"); }
        void wheels(int value) const { WriteField<int>("wheels", value); }
        bool hasTube() const { return ReadField<bool>("hasTube"); }
        void hasTube(bool value) const { WriteField<bool>("hasTube", value); }
        bool hasBreech() const { return ReadField<bool>("hasBreech"); }
        void hasBreech(bool value) const { WriteField<bool>("hasBreech", value); }
        bool hasCarriage() const { return ReadField<bool>("hasCarriage"); }
        void hasCarriage(bool value) const { WriteField<bool>("hasCarriage", value); }
        bool hasTrail() const { return ReadField<bool>("hasTrail"); }
        void hasTrail(bool value) const { WriteField<bool>("hasTrail", value); }
        bool hasRecoil() const { return ReadField<bool>("hasRecoil"); }
        void hasRecoil(bool value) const { WriteField<bool>("hasRecoil", value); }
        bool hasShield() const { return ReadField<bool>("hasShield"); }
        void hasShield(bool value) const { WriteField<bool>("hasShield", value); }
        bool hasFrame() const { return ReadField<bool>("hasFrame"); }
        void hasFrame(bool value) const { WriteField<bool>("hasFrame", value); }
        bool hasArm() const { return ReadField<bool>("hasArm"); }
        void hasArm(bool value) const { WriteField<bool>("hasArm", value); }
        bool hasSkein() const { return ReadField<bool>("hasSkein"); }
        void hasSkein(bool value) const { WriteField<bool>("hasSkein", value); }
        bool hasCounterweight() const { return ReadField<bool>("hasCounterweight"); }
        void hasCounterweight(bool value) const { WriteField<bool>("hasCounterweight", value); }
        bool hasSling() const { return ReadField<bool>("hasSling"); }
        void hasSling(bool value) const { WriteField<bool>("hasSling", value); }
        float tubeLen() const { return ReadField<float>("tubeLen"); }
        void tubeLen(float value) const { WriteField<float>("tubeLen", value); }
        float tubeOuterDia() const { return ReadField<float>("tubeOuterDia"); }
        void tubeOuterDia(float value) const { WriteField<float>("tubeOuterDia", value); }
        float tubeKg() const { return ReadField<float>("tubeKg"); }
        void tubeKg(float value) const { WriteField<float>("tubeKg", value); }
        int tubeMaterial() const { return ReadField<int>("tubeMaterial"); }
        void tubeMaterial(int value) const { WriteField<int>("tubeMaterial", value); }
        float armLen() const { return ReadField<float>("armLen"); }
        void armLen(float value) const { WriteField<float>("armLen", value); }
        float skeinLitres() const { return ReadField<float>("skeinLitres"); }
        void skeinLitres(float value) const { WriteField<float>("skeinLitres", value); }
        float counterweightKg() const { return ReadField<float>("counterweightKg"); }
        void counterweightKg(float value) const { WriteField<float>("counterweightKg", value); }
        float bodyKg() const { return ReadField<float>("bodyKg"); }
        void bodyKg(float value) const { WriteField<float>("bodyKg", value); }
        bool tubeOnCarriage() const { return ReadField<bool>("tubeOnCarriage"); }
        void tubeOnCarriage(bool value) const { WriteField<bool>("tubeOnCarriage", value); }
    };
}
