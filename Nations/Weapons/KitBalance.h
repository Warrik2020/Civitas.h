#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class KitBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit KitBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "KitBalance") {}
    public:
        float FloorMelee() const { return ReadStaticField<float>("FloorMelee"); }
        float FloorFirearm() const { return ReadStaticField<float>("FloorFirearm"); }
        float FloorArmour() const { return ReadStaticField<float>("FloorArmour"); }
        float FloorVehicle() const { return ReadStaticField<float>("FloorVehicle"); }
        float FloorArtillery() const { return ReadStaticField<float>("FloorArtillery"); }
        float ArmourRelevanceScore() const { return ReadStaticField<float>("ArmourRelevanceScore"); }
        float RatioExp() const { return ReadStaticField<float>("RatioExp"); }
        float MulMin() const { return ReadStaticField<float>("MulMin"); }
        float MulMax() const { return ReadStaticField<float>("MulMax"); }
        float UnarmedAttackMul() const { return ReadStaticField<float>("UnarmedAttackMul"); }
        float UnarmedRatioMax() const { return ReadStaticField<float>("UnarmedRatioMax"); }
        float UnarmedBleedMaxFractionPerTick() const { return ReadStaticField<float>("UnarmedBleedMaxFractionPerTick"); }
        float UnarmedBelow() const { return ReadStaticField<float>("UnarmedBelow"); }
        float ArmedSupplyFull() const { return ReadStaticField<float>("ArmedSupplyFull"); }
        float SuppressExp() const { return ReadStaticField<float>("SuppressExp"); }
        float TankVehicleWeight() const { return ReadStaticField<float>("TankVehicleWeight"); }
        float ArmourFreeKg() const { return ReadStaticField<float>("ArmourFreeKg"); }
        float ArmourKgSpan() const { return ReadStaticField<float>("ArmourKgSpan"); }
        float ArmourSpeedFloor() const { return ReadStaticField<float>("ArmourSpeedFloor"); }
        float SpeedMin() const { return ReadStaticField<float>("SpeedMin"); }
        float SpeedMax() const { return ReadStaticField<float>("SpeedMax"); }
        int FirearmEraStart() const { return ReadStaticField<int>("FirearmEraStart"); }
        int FirearmEraMid() const { return ReadStaticField<int>("FirearmEraMid"); }
        int FirearmEraLate() const { return ReadStaticField<int>("FirearmEraLate"); }
        int BowEraStart() const { return ReadStaticField<int>("BowEraStart"); }
        int BowEraFull() const { return ReadStaticField<int>("BowEraFull"); }
        float BowShare() const { return ReadStaticField<float>("BowShare"); }
        float PriceSlope() const { return ReadStaticField<float>("PriceSlope"); }
        float PriceMin() const { return ReadStaticField<float>("PriceMin"); }
        float PriceMax() const { return ReadStaticField<float>("PriceMax"); }
        float BuildSlope() const { return ReadStaticField<float>("BuildSlope"); }
        int RetrofitPerPass() const { return ReadStaticField<int>("RetrofitPerPass"); }
        float RearmReturnFraction() const { return ReadStaticField<float>("RearmReturnFraction"); }
        float RearmMinGain() const { return ReadStaticField<float>("RearmMinGain"); }
        float RearmMinOrgFraction() const { return ReadStaticField<float>("RearmMinOrgFraction"); }
        int AiIntervalTicks() const { return ReadStaticField<int>("AiIntervalTicks"); }
    };
}
