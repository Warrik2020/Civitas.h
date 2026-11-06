#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class SupplyDoctrineBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SupplyDoctrineBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "SupplyDoctrineBalance") {}
    public:
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void Enabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
        float MarginalMin() const { return ReadStaticField<float>("MarginalMin"); }
        float MaxPostStrain() const { return ReadStaticField<float>("MaxPostStrain"); }
        float StarvedPostDE() const { return ReadStaticField<float>("StarvedPostDE"); }
        float AdvanceMinReachTiles() const { return ReadStaticField<float>("AdvanceMinReachTiles"); }
        float AdvanceProbeTiles() const { return ReadStaticField<float>("AdvanceProbeTiles"); }
        float AdvanceForageShare() const { return ReadStaticField<float>("AdvanceForageShare"); }
        float RelieveBelowLevel() const { return ReadStaticField<float>("RelieveBelowLevel"); }
        float RelieveShare() const { return ReadStaticField<float>("RelieveShare"); }
        float ReserveMaxBackTiles() const { return ReadStaticField<float>("ReserveMaxBackTiles"); }
        float ReserveMaxStrain() const { return ReadStaticField<float>("ReserveMaxStrain"); }
        float RecruitStrainFrom() const { return ReadStaticField<float>("RecruitStrainFrom"); }
        float RecruitStrainWeightThreat() const { return ReadStaticField<float>("RecruitStrainWeightThreat"); }
        float RecruitStrainWeightSpread() const { return ReadStaticField<float>("RecruitStrainWeightSpread"); }
        float ArmyCapPeaceMul() const { return ReadStaticField<float>("ArmyCapPeaceMul"); }
        float ArmyCapWarMul() const { return ReadStaticField<float>("ArmyCapWarMul"); }
        float StagingShare() const { return ReadStaticField<float>("StagingShare"); }
        int StagingMemoryTicks() const { return ReadStaticField<int>("StagingMemoryTicks"); }
        float DepotStrainTrigger() const { return ReadStaticField<float>("DepotStrainTrigger"); }
        float DepotMinGain() const { return ReadStaticField<float>("DepotMinGain"); }
        float RoadStrainTrigger() const { return ReadStaticField<float>("RoadStrainTrigger"); }
        float RoadMinGainPer1000() const { return ReadStaticField<float>("RoadMinGainPer1000"); }
    };
}
