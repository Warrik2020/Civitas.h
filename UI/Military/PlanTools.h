#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Military
{
    class PlanTools : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PlanTools(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Military", "PlanTools") {}
    public:
        void ToggleFront() const { CallStatic("ToggleFront", nullptr, 0); }
        void ToggleFallback() const { CallStatic("ToggleFallback", nullptr, 0); }
        void ToggleOffensive() const { CallStatic("ToggleOffensive", nullptr, 0); }
        void ToggleSpearhead() const { CallStatic("ToggleSpearhead", nullptr, 0); }
        void ToggleDelete() const { CallStatic("ToggleDelete", nullptr, 0); }
        void CancelTool() const { CallStatic("CancelTool", nullptr, 0); }
        void* ArmyAtScreen(void* screen) const { void* args[] = { screen }; return CallStatic("ArmyAtScreen", args, 1); }
        bool SameOrder(void* o) const { void* args[] = { o }; return CallValue<bool>("SameOrder", args, 1); }
        void* kind() const { return ReadField<void*>("kind"); }
        void SetKind(void* value) const { WriteField<void*>("kind", value); }
        int armyId() const { return ReadField<int>("armyId"); }
        void SetArmyId(int value) const { WriteField<int>("armyId", value); }
        int spearheadId() const { return ReadField<int>("spearheadId"); }
        void SetSpearheadId(int value) const { WriteField<int>("spearheadId", value); }
        int point() const { return ReadField<int>("point"); }
        void SetPoint(int value) const { WriteField<int>("point", value); }
        void* None() const { return ReadStaticField<void*>("None"); }
    };
}
