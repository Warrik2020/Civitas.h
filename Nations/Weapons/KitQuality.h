#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class KitQuality : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit KitQuality(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "KitQuality") {}
    public:
        void Publish(int year) const { void* __callArgs[] = { &year }; CallStatic("Publish", __callArgs, 1); }
        void SetEnabled(bool on) const { void* __callArgs[] = { &on }; CallStatic("SetEnabled", __callArgs, 1); }
        float FirearmWeight(int year) const { void* __callArgs[] = { &year }; return CallStaticValue<float>("FirearmWeight", __callArgs, 1); }
        float Ratio(float score, float baseline, float floor) const { void* __callArgs[] = { &score, &baseline, &floor }; return CallStaticValue<float>("Ratio", __callArgs, 3); }
        float ArmourFloorFor(float baseline) const { void* __callArgs[] = { &baseline }; return CallStaticValue<float>("ArmourFloorFor", __callArgs, 1); }
        void Compute(int cls, float kitFirearm, float kitMelee, float kitArmour, float kitArmourKg, float vehicleAttack, float vehicleDefence, float vehicleSpeed, float& attackMul, float& damageTakenMul, float& speedMul) const { void* __callArgs[] = { &cls, &kitFirearm, &kitMelee, &kitArmour, &kitArmourKg, &vehicleAttack, &vehicleDefence, &vehicleSpeed, &attackMul, &damageTakenMul, &speedMul }; CallStatic("Compute", __callArgs, 11); }
        void Compute(float tankShare, float gunShare, float kitFirearm, float kitMelee, float kitArmour, float kitArmourKg, float vehicleAttack, float vehicleDefence, float vehicleSpeed, float kitArtillery, bool paceHasVehicles, float& attackMul, float& damageTakenMul, float& speedMul) const { void* __callArgs[] = { &tankShare, &gunShare, &kitFirearm, &kitMelee, &kitArmour, &kitArmourKg, &vehicleAttack, &vehicleDefence, &vehicleSpeed, &kitArtillery, &paceHasVehicles, &attackMul, &damageTakenMul, &speedMul }; CallStatic("Compute", __callArgs, 14); }
        void Ratios(float kitFirearm, float kitMelee, float kitArmour, float vehicleAttack, float vehicleDefence, float kitArtillery, float& hand, float& firearm, float& armour, float& vehAtk, float& vehDef, float& artillery) const { void* __callArgs[] = { &kitFirearm, &kitMelee, &kitArmour, &vehicleAttack, &vehicleDefence, &kitArtillery, &hand, &firearm, &armour, &vehAtk, &vehDef, &artillery }; CallStatic("Ratios", __callArgs, 12); }
        void Refresh(void* d) const { void* __callArgs[] = { d }; CallStatic("Refresh", __callArgs, 1); }
        bool IsArmed(int cls, float kitFirearm, float kitMelee, float vehicleAttack) const { void* __callArgs[] = { &cls, &kitFirearm, &kitMelee, &vehicleAttack }; return CallStaticValue<bool>("IsArmed", __callArgs, 4); }
        bool IsArmed(float kitFirearm, float kitMelee, float vehicleAttack, float artillery) const { void* __callArgs[] = { &kitFirearm, &kitMelee, &vehicleAttack, &artillery }; return CallStaticValue<bool>("IsArmed", __callArgs, 4); }
        float ArmedFraction(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<float>("ArmedFraction", __callArgs, 1); }
        float ArmedAttackMul(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<float>("ArmedAttackMul", __callArgs, 1); }
        bool FightsUnarmed(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<bool>("FightsUnarmed", __callArgs, 1); }
        float FirearmPreviewMul(float score) const { void* __callArgs[] = { &score }; return CallStaticValue<float>("FirearmPreviewMul", __callArgs, 1); }
        float MeleePreviewMul(float score) const { void* __callArgs[] = { &score }; return CallStaticValue<float>("MeleePreviewMul", __callArgs, 1); }
        void ArmourPreview(float score, float carriedKg, float& damageTakenMul, float& speedMul) const { void* __callArgs[] = { &score, &carriedKg, &damageTakenMul, &speedMul }; CallStatic("ArmourPreview", __callArgs, 4); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
    };
}
