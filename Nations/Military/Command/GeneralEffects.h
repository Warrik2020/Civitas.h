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
        float MarshalCommand(void* marshal) const { void* args[] = { marshal }; return CallStaticValue<float>("MarshalCommand", args, 1); }
        void* Of(int armyId) const { void* args[] = { &armyId }; return CallStatic("Of", args, 1); }
        void* Of(void* store, int armyId) const { void* args[] = { store, &armyId }; return CallStatic("Of", args, 2); }
        void* Build(void* general, void* marshal) const { void* args[] = { general, marshal }; return CallStatic("Build", args, 2); }
        float BasePlanningMax() const { return ReadStaticField<float>("BasePlanningMax"); }
        float MarshalAttackPerSkill() const { return ReadStaticField<float>("MarshalAttackPerSkill"); }
        float MarshalDefencePerSkill() const { return ReadStaticField<float>("MarshalDefencePerSkill"); }
        float MarshalPlanningPerSkill() const { return ReadStaticField<float>("MarshalPlanningPerSkill"); }
    };
}
