#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class GeneralEffects : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GeneralEffects(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "GeneralEffects") {}
    public:
        float MarshalCommand(void* marshal) const { void* __callArgs[] = { marshal }; return CallStaticValue<float>("MarshalCommand", __callArgs, 1); }
        void* Of(int armyId) const { void* __callArgs[] = { &armyId }; return CallStatic("Of", __callArgs, 1); }
        void* Of(void* store, int armyId) const { void* __callArgs[] = { store, &armyId }; return CallStatic("Of", __callArgs, 2); }
        void* Build(void* general, void* marshal) const { void* __callArgs[] = { general, marshal }; return CallStatic("Build", __callArgs, 2); }
        float BasePlanningMax() const { return ReadStaticField<float>("BasePlanningMax"); }
        float MarshalAttackPerSkill() const { return ReadStaticField<float>("MarshalAttackPerSkill"); }
        float MarshalDefencePerSkill() const { return ReadStaticField<float>("MarshalDefencePerSkill"); }
        float MarshalPlanningPerSkill() const { return ReadStaticField<float>("MarshalPlanningPerSkill"); }
    };
}
