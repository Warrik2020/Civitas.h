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
        float CartridgeDiameter(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<float>("CartridgeDiameter", __callArgs, 1); }
        float CartridgeLength(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<float>("CartridgeLength", __callArgs, 1); }
        float DepthOf(void* p) const { void* __callArgs[] = { p }; return CallStaticValue<float>("DepthOf", __callArgs, 1); }
        void* Measure(void* d) const { void* __callArgs[] = { d }; return CallStatic("Measure", __callArgs, 1); }
        bool IsNeutral(void* d, void* p, void* m) const { void* __callArgs[] = { d, p, &m }; return CallStaticValue<bool>("IsNeutral", __callArgs, 3); }
        bool GripQualifies(void* d, void* grip, void* m) const { void* __callArgs[] = { d, grip, &m }; return CallStaticValue<bool>("GripQualifies", __callArgs, 3); }
        bool HandZone(void* m, void* min_, void* max_) const { void* __callArgs[] = { &m, &min_, &max_ }; return CallStaticValue<bool>("HandZone", __callArgs, 3); }
        bool HasBlocking(void* issues) const { void* __callArgs[] = { issues }; return CallStaticValue<bool>("HasBlocking", __callArgs, 1); }
        void Validate(void* d, void* it, void* issues) const { void* __callArgs[] = { d, it, issues }; CallStatic("Validate", __callArgs, 3); }
        void AddShapeIssues(void* d, void* issues) const { void* __callArgs[] = { d, issues }; CallStatic("AddShapeIssues", __callArgs, 2); }
        void AddAttachmentIssues(void* d, void* issues) const { void* __callArgs[] = { d, issues }; CallStatic("AddAttachmentIssues", __callArgs, 2); }
        void* Evaluate(void* d) const { void* __callArgs[] = { d }; return CallStatic("Evaluate", __callArgs, 1); }
        void* Evaluate(void* d, void* m) const { void* __callArgs[] = { d, m }; return CallStatic("Evaluate", __callArgs, 2); }
        float FullChargeVelocity(int powder, float barrelMm, float cal, int ammo) const { void* __callArgs[] = { &powder, &barrelMm, &cal, &ammo }; return CallStaticValue<float>("FullChargeVelocity", __callArgs, 4); }
        float ProductionMul(float complexity, float typicalComplexity) const { void* __callArgs[] = { &complexity, &typicalComplexity }; return CallStaticValue<float>("ProductionMul", __callArgs, 2); }
    };
}
