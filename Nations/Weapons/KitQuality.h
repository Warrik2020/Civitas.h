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
        void Publish(int year) const { void* args[] = { &year }; CallStatic("Publish", args, 1); }
        void SetEnabled(bool on) const { void* args[] = { &on }; CallStatic("SetEnabled", args, 1); }
        float FirearmWeight(int year) const { void* args[] = { &year }; return CallStaticValue<float>("FirearmWeight", args, 1); }
        float Ratio(float score, float baseline, float floor) const { void* args[] = { &score, &baseline, &floor }; return CallStaticValue<float>("Ratio", args, 3); }
        float ArmourFloorFor(float baseline) const { void* args[] = { &baseline }; return CallStaticValue<float>("ArmourFloorFor", args, 1); }
        void Compute(int cls, float kitFirearm, float kitMelee, float kitArmour, float kitArmourKg, float vehicleAttack, float vehicleDefence, float vehicleSpeed, float& attackMul, float& damageTakenMul, float& speedMul) const { void* args[] = { &cls, &kitFirearm, &kitMelee, &kitArmour, &kitArmourKg, &vehicleAttack, &vehicleDefence, &vehicleSpeed, &attackMul, &damageTakenMul, &speedMul }; CallStatic("Compute", args, 11); }
        void Compute(float tankShare, float gunShare, float kitFirearm, float kitMelee, float kitArmour, float kitArmourKg, float vehicleAttack, float vehicleDefence, float vehicleSpeed, float kitArtillery, bool paceHasVehicles, float& attackMul, float& damageTakenMul, float& speedMul) const { void* args[] = { &tankShare, &gunShare, &kitFirearm, &kitMelee, &kitArmour, &kitArmourKg, &vehicleAttack, &vehicleDefence, &vehicleSpeed, &kitArtillery, &paceHasVehicles, &attackMul, &damageTakenMul, &speedMul }; CallStatic("Compute", args, 14); }
        void Ratios(float kitFirearm, float kitMelee, float kitArmour, float vehicleAttack, float vehicleDefence, float kitArtillery, float& hand, float& firearm, float& armour, float& vehAtk, float& vehDef, float& artillery) const { void* args[] = { &kitFirearm, &kitMelee, &kitArmour, &vehicleAttack, &vehicleDefence, &kitArtillery, &hand, &firearm, &armour, &vehAtk, &vehDef, &artillery }; CallStatic("Ratios", args, 12); }
        void Refresh(void* d) const { void* args[] = { d }; CallStatic("Refresh", args, 1); }
        bool IsArmed(int cls, float kitFirearm, float kitMelee, float vehicleAttack) const { void* args[] = { &cls, &kitFirearm, &kitMelee, &vehicleAttack }; return CallStaticValue<bool>("IsArmed", args, 4); }
        bool IsArmed(float kitFirearm, float kitMelee, float vehicleAttack, float artillery) const { void* args[] = { &kitFirearm, &kitMelee, &vehicleAttack, &artillery }; return CallStaticValue<bool>("IsArmed", args, 4); }
        float ArmedFraction(void* d) const { void* args[] = { d }; return CallStaticValue<float>("ArmedFraction", args, 1); }
        float ArmedAttackMul(void* d) const { void* args[] = { d }; return CallStaticValue<float>("ArmedAttackMul", args, 1); }
        bool FightsUnarmed(void* d) const { void* args[] = { d }; return CallStaticValue<bool>("FightsUnarmed", args, 1); }
        float FirearmPreviewMul(float score) const { void* args[] = { &score }; return CallStaticValue<float>("FirearmPreviewMul", args, 1); }
        float MeleePreviewMul(float score) const { void* args[] = { &score }; return CallStaticValue<float>("MeleePreviewMul", args, 1); }
        void ArmourPreview(float score, float carriedKg, float& damageTakenMul, float& speedMul) const { void* args[] = { &score, &carriedKg, &damageTakenMul, &speedMul }; CallStatic("ArmourPreview", args, 4); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
    };
}
