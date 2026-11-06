#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class ArmourMeasures : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ArmourMeasures(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "ArmourMeasures") {}
    public:
        int partCount() const { return ReadField<int>("partCount"); }
        void SetPartCount(int value) const { WriteField<int>("partCount", value); }
        void* steelFront() const { return ReadField<void*>("steelFront"); }
        void SetSteelFront(void* value) const { WriteField<void*>("steelFront", value); }
        void* steelRear() const { return ReadField<void*>("steelRear"); }
        void SetSteelRear(void* value) const { WriteField<void*>("steelRear", value); }
        void* coverFront() const { return ReadField<void*>("coverFront"); }
        void SetCoverFront(void* value) const { WriteField<void*>("coverFront", value); }
        void* coverRear() const { return ReadField<void*>("coverRear"); }
        void SetCoverRear(void* value) const { WriteField<void*>("coverRear", value); }
        float faceCoverage() const { return ReadField<float>("faceCoverage"); }
        void SetFaceCoverage(float value) const { WriteField<float>("faceCoverage", value); }
        float kg() const { return ReadField<float>("kg"); }
        void SetKg(float value) const { WriteField<float>("kg", value); }
        float actuatorMm2() const { return ReadField<float>("actuatorMm2"); }
        void SetActuatorMm2(float value) const { WriteField<float>("actuatorMm2", value); }
        float powerCellMm2() const { return ReadField<float>("powerCellMm2"); }
        void SetPowerCellMm2(float value) const { WriteField<float>("powerCellMm2", value); }
        int actuators() const { return ReadField<int>("actuators"); }
        void SetActuators(int value) const { WriteField<int>("actuators", value); }
        bool hasSkull() const { return ReadField<bool>("hasSkull"); }
        void SetHasSkull(bool value) const { WriteField<bool>("hasSkull", value); }
        bool hasBreastplate() const { return ReadField<bool>("hasBreastplate"); }
        void SetHasBreastplate(bool value) const { WriteField<bool>("hasBreastplate", value); }
        bool hasShield() const { return ReadField<bool>("hasShield"); }
        void SetHasShield(bool value) const { WriteField<bool>("hasShield", value); }
        bool hasPowerCell() const { return ReadField<bool>("hasPowerCell"); }
        void SetHasPowerCell(bool value) const { WriteField<bool>("hasPowerCell", value); }
        bool hasSensor() const { return ReadField<bool>("hasSensor"); }
        void SetHasSensor(bool value) const { WriteField<bool>("hasSensor", value); }
        bool hasVisor() const { return ReadField<bool>("hasVisor"); }
        void SetHasVisor(bool value) const { WriteField<bool>("hasVisor", value); }
        bool hasLegs() const { return ReadField<bool>("hasLegs"); }
        void SetHasLegs(bool value) const { WriteField<bool>("hasLegs", value); }
        bool hasPadding() const { return ReadField<bool>("hasPadding"); }
        void SetHasPadding(bool value) const { WriteField<bool>("hasPadding", value); }
        bool hasBelt() const { return ReadField<bool>("hasBelt"); }
        void SetHasBelt(bool value) const { WriteField<bool>("hasBelt", value); }
        int mainMaterial() const { return ReadField<int>("mainMaterial"); }
        void SetMainMaterial(int value) const { WriteField<int>("mainMaterial", value); }
        float weightedCoverage() const { return ReadField<float>("weightedCoverage"); }
        void SetWeightedCoverage(float value) const { WriteField<float>("weightedCoverage", value); }
        int pouchCount() const { return ReadField<int>("pouchCount"); }
        void SetPouchCount(int value) const { WriteField<int>("pouchCount", value); }
        int pouchesOnJoints() const { return ReadField<int>("pouchesOnJoints"); }
        void SetPouchesOnJoints(int value) const { WriteField<int>("pouchesOnJoints", value); }
        float loadLitres() const { return ReadField<float>("loadLitres"); }
        void SetLoadLitres(float value) const { WriteField<float>("loadLitres", value); }
        void* jointStiffness() const { return ReadField<void*>("jointStiffness"); }
        void SetJointStiffness(void* value) const { WriteField<void*>("jointStiffness", value); }
        float momentX() const { return ReadField<float>("momentX"); }
        void SetMomentX(float value) const { WriteField<float>("momentX", value); }
        float wornKg() const { return ReadField<float>("wornKg"); }
        void SetWornKg(float value) const { WriteField<float>("wornKg", value); }
        float headKg() const { return ReadField<float>("headKg"); }
        void SetHeadKg(float value) const { WriteField<float>("headKg", value); }
        bool hasRigidCover() const { return ReadField<bool>("hasRigidCover"); }
        void SetHasRigidCover(bool value) const { WriteField<bool>("hasRigidCover", value); }
    };
}
