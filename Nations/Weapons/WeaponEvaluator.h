#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class WeaponEvaluator : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WeaponEvaluator(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "WeaponEvaluator") {}
    public:
        float CartridgeDiameter(void* d) const { void* args[] = { d }; return CallStaticValue<float>("CartridgeDiameter", args, 1); }
        float CartridgeLength(void* d) const { void* args[] = { d }; return CallStaticValue<float>("CartridgeLength", args, 1); }
        float DepthOf(void* p) const { void* args[] = { p }; return CallStaticValue<float>("DepthOf", args, 1); }
        void* Measure(void* d) const { void* args[] = { d }; return CallStatic("Measure", args, 1); }
        bool IsNeutral(void* d, void* p, void* m) const { void* args[] = { d, p, &m }; return CallStaticValue<bool>("IsNeutral", args, 3); }
        bool GripQualifies(void* d, void* grip, void* m) const { void* args[] = { d, grip, &m }; return CallStaticValue<bool>("GripQualifies", args, 3); }
        bool HandZone(void* m, void* min, void* max) const { void* args[] = { &m, &min, &max }; return CallStaticValue<bool>("HandZone", args, 3); }
        bool HasBlocking(void* issues) const { void* args[] = { issues }; return CallStaticValue<bool>("HasBlocking", args, 1); }
        void Validate(void* d, void* it, void* issues) const { void* args[] = { d, it, issues }; CallStatic("Validate", args, 3); }
        void AddShapeIssues(void* d, void* issues) const { void* args[] = { d, issues }; CallStatic("AddShapeIssues", args, 2); }
        void AddAttachmentIssues(void* d, void* issues) const { void* args[] = { d, issues }; CallStatic("AddAttachmentIssues", args, 2); }
        void* Evaluate(void* d) const { void* args[] = { d }; return CallStatic("Evaluate", args, 1); }
        void* Evaluate(void* d, void* m) const { void* args[] = { d, m }; return CallStatic("Evaluate", args, 2); }
        float FullChargeVelocity(int powder, float barrelMm, float cal, int ammo) const { void* args[] = { &powder, &barrelMm, &cal, &ammo }; return CallStaticValue<float>("FullChargeVelocity", args, 4); }
        float ProductionMul(float complexity, float typicalComplexity) const { void* args[] = { &complexity, &typicalComplexity }; return CallStaticValue<float>("ProductionMul", args, 2); }
        float Range(float v) const { void* args[] = { &v }; return CallValue<float>("Range", args, 1); }
        float Accuracy(float v) const { void* args[] = { &v }; return CallValue<float>("Accuracy", args, 1); }
        float Reliability(float v) const { void* args[] = { &v }; return CallValue<float>("Reliability", args, 1); }
        float Value(float v) const { void* args[] = { &v }; return CallValue<float>("Value", args, 1); }
        float cal() const { return ReadField<float>("cal"); }
        void SetCal(float value) const { WriteField<float>("cal", value); }
        float grams() const { return ReadField<float>("grams"); }
        void SetGrams(float value) const { WriteField<float>("grams", value); }
        float weightKg() const { return ReadField<float>("weightKg"); }
        void SetWeightKg(float value) const { WriteField<float>("weightKg", value); }
        float strength() const { return ReadField<float>("strength"); }
        void SetStrength(float value) const { WriteField<float>("strength", value); }
        float wallMm() const { return ReadField<float>("wallMm"); }
        void SetWallMm(float value) const { WriteField<float>("wallMm", value); }
        float referenceVelocity() const { return ReadField<float>("referenceVelocity"); }
        void SetReferenceVelocity(float value) const { WriteField<float>("referenceVelocity", value); }
        float reliability() const { return ReadField<float>("reliability"); }
        void SetReliability(float value) const { WriteField<float>("reliability", value); }
        float rangeBase() const { return ReadField<float>("rangeBase"); }
        void SetRangeBase(float value) const { WriteField<float>("rangeBase", value); }
        float accuracyBase() const { return ReadField<float>("accuracyBase"); }
        void SetAccuracyBase(float value) const { WriteField<float>("accuracyBase", value); }
        float lethalityExp() const { return ReadField<float>("lethalityExp"); }
        void SetLethalityExp(float value) const { WriteField<float>("lethalityExp", value); }
        float rangeExp() const { return ReadField<float>("rangeExp"); }
        void SetRangeExp(float value) const { WriteField<float>("rangeExp", value); }
        float accuracyExp() const { return ReadField<float>("accuracyExp"); }
        void SetAccuracyExp(float value) const { WriteField<float>("accuracyExp", value); }
    };
}
