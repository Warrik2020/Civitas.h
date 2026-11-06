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
        void* Compute(float tankShare, float gunShare, float cavShare, float hand, float firearm, float armour, float vehAtk, float vehDef, float artillery) const { void* __callArgs[] = { &tankShare, &gunShare, &cavShare, &hand, &firearm, &armour, &vehAtk, &vehDef, &artillery }; return CallStatic("Compute", __callArgs, 9); }
        void* FromKit(float tankShare, float gunShare, float cavShare, float kitFirearm, float kitMelee, float kitArmour, float kitVehicleAtk, float kitVehicleDef, float kitArtillery) const { void* __callArgs[] = { &tankShare, &gunShare, &cavShare, &kitFirearm, &kitMelee, &kitArmour, &kitVehicleAtk, &kitVehicleDef, &kitArtillery }; return CallStatic("FromKit", __callArgs, 9); }
        void Refresh(void* d) const { void* __callArgs[] = { d }; CallStatic("Refresh", __callArgs, 1); }
        float Score(void* s) const { void* __callArgs[] = { &s }; return CallStaticValue<float>("Score", __callArgs, 1); }
        float ArmedMul(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<float>("ArmedMul", __callArgs, 1); }
        void* Live(void* d, int tick) const { void* __callArgs[] = { d, &tick }; return CallStatic("Live", __callArgs, 2); }
        void* Par() const { return ReadStaticField<void*>("Par"); }
    };
}
