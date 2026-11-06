#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class CombatStatsBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CombatStatsBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "CombatStatsBalance") {}
    public:
        float ReferenceStrength() const { return ReadStaticField<float>("ReferenceStrength"); }
        float DisplayScale() const { return ReadStaticField<float>("DisplayScale"); }
        float FootSoft() const { return ReadStaticField<float>("FootSoft"); }
        float FootHard() const { return ReadStaticField<float>("FootHard"); }
        float FootDefence() const { return ReadStaticField<float>("FootDefence"); }
        float FootBreak() const { return ReadStaticField<float>("FootBreak"); }
        float HorseSoft() const { return ReadStaticField<float>("HorseSoft"); }
        float HorseHard() const { return ReadStaticField<float>("HorseHard"); }
        float HorseDefence() const { return ReadStaticField<float>("HorseDefence"); }
        float HorseBreak() const { return ReadStaticField<float>("HorseBreak"); }
        float GunSoft() const { return ReadStaticField<float>("GunSoft"); }
        float GunHard() const { return ReadStaticField<float>("GunHard"); }
        float GunDefence() const { return ReadStaticField<float>("GunDefence"); }
        float GunBreak() const { return ReadStaticField<float>("GunBreak"); }
        float TankSoft() const { return ReadStaticField<float>("TankSoft"); }
        float TankHard() const { return ReadStaticField<float>("TankHard"); }
        float TankDefence() const { return ReadStaticField<float>("TankDefence"); }
        float TankBreak() const { return ReadStaticField<float>("TankBreak"); }
        float TankHardness() const { return ReadStaticField<float>("TankHardness"); }
        float TankArmour() const { return ReadStaticField<float>("TankArmour"); }
        float ArmourMinShare() const { return ReadStaticField<float>("ArmourMinShare"); }
        float ArmourDiluted() const { return ReadStaticField<float>("ArmourDiluted"); }
        float ArmourFullShare() const { return ReadStaticField<float>("ArmourFullShare"); }
        float FootPierce() const { return ReadStaticField<float>("FootPierce"); }
        float GunPierce() const { return ReadStaticField<float>("GunPierce"); }
        float TankPierce() const { return ReadStaticField<float>("TankPierce"); }
        float PierceBestWeight() const { return ReadStaticField<float>("PierceBestWeight"); }
        float RatioMin() const { return ReadStaticField<float>("RatioMin"); }
        float RatioMax() const { return ReadStaticField<float>("RatioMax"); }
        float ParSum() const { return ReadStaticField<float>("ParSum"); }
    };
}
