#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class CombatStatsCalc : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CombatStatsCalc(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "CombatStatsCalc") {}
    public:
        void* Compute(float tankShare, float gunShare, float cavShare, float hand, float firearm, float armour, float vehAtk, float vehDef, float artillery) const { void* args[] = { &tankShare, &gunShare, &cavShare, &hand, &firearm, &armour, &vehAtk, &vehDef, &artillery }; return CallStatic("Compute", args, 9); }
        void* FromKit(float tankShare, float gunShare, float cavShare, float kitFirearm, float kitMelee, float kitArmour, float kitVehicleAtk, float kitVehicleDef, float kitArtillery) const { void* args[] = { &tankShare, &gunShare, &cavShare, &kitFirearm, &kitMelee, &kitArmour, &kitVehicleAtk, &kitVehicleDef, &kitArtillery }; return CallStatic("FromKit", args, 9); }
        void Refresh(void* d) const { void* args[] = { d }; CallStatic("Refresh", args, 1); }
        float Score(void* s) const { void* args[] = { &s }; return CallStaticValue<float>("Score", args, 1); }
        float ArmedMul(void* d) const { void* args[] = { d }; return CallStaticValue<float>("ArmedMul", args, 1); }
        void* Live(void* d, int tick) const { void* args[] = { d, &tick }; return CallStatic("Live", args, 2); }
        void* Par() const { return ReadStaticField<void*>("Par"); }
    };
}
