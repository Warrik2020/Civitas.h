#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class CompositionBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CompositionBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "CompositionBalance") {}
    public:
        int ReferenceMen() const { return ReadStaticField<int>("ReferenceMen"); }
        int MinMen() const { return ReadStaticField<int>("MinMen"); }
        int MaxMen() const { return ReadStaticField<int>("MaxMen"); }
        int MaxSoldiers() const { return ReadStaticField<int>("MaxSoldiers"); }
        int MaxCavalry() const { return ReadStaticField<int>("MaxCavalry"); }
        int MaxTanks() const { return ReadStaticField<int>("MaxTanks"); }
        int MaxGuns() const { return ReadStaticField<int>("MaxGuns"); }
        int MaxCars() const { return ReadStaticField<int>("MaxCars"); }
        int DefaultTankCrew() const { return ReadStaticField<int>("DefaultTankCrew"); }
        int DefaultGunCrew() const { return ReadStaticField<int>("DefaultGunCrew"); }
        int Driver() const { return ReadStaticField<int>("Driver"); }
        float TankWorth() const { return ReadStaticField<float>("TankWorth"); }
        float GunWorth() const { return ReadStaticField<float>("GunWorth"); }
        float DefaultSeats() const { return ReadStaticField<float>("DefaultSeats"); }
        float CavalryPace() const { return ReadStaticField<float>("CavalryPace"); }
        float TankPaceBase() const { return ReadStaticField<float>("TankPaceBase"); }
        float CarPaceBase() const { return ReadStaticField<float>("CarPaceBase"); }
        float PaceMin() const { return ReadStaticField<float>("PaceMin"); }
        float PaceMax() const { return ReadStaticField<float>("PaceMax"); }
        float SpeedRefKph() const { return ReadStaticField<float>("SpeedRefKph"); }
        float TowKphFoot() const { return ReadStaticField<float>("TowKphFoot"); }
        float CavalryReach() const { return ReadStaticField<float>("CavalryReach"); }
        float TankReach() const { return ReadStaticField<float>("TankReach"); }
        float MotorReach() const { return ReadStaticField<float>("MotorReach"); }
        float AoiMax() const { return ReadStaticField<float>("AoiMax"); }
        float TankClassShare() const { return ReadStaticField<float>("TankClassShare"); }
        float CavalryClassShare() const { return ReadStaticField<float>("CavalryClassShare"); }
        float GoldSoldier() const { return ReadStaticField<float>("GoldSoldier"); }
        float GoldCavalry() const { return ReadStaticField<float>("GoldCavalry"); }
        float GoldCrew() const { return ReadStaticField<float>("GoldCrew"); }
        float GoldTank() const { return ReadStaticField<float>("GoldTank"); }
        float GoldGun() const { return ReadStaticField<float>("GoldGun"); }
        float GoldCar() const { return ReadStaticField<float>("GoldCar"); }
        float TimeHeavy() const { return ReadStaticField<float>("TimeHeavy"); }
        float GunDefenceFactor() const { return ReadStaticField<float>("GunDefenceFactor"); }
        float ArtilleryEntrenchPierce() const { return ReadStaticField<float>("ArtilleryEntrenchPierce"); }
        float CavalryPursuit() const { return ReadStaticField<float>("CavalryPursuit"); }
    };
}
