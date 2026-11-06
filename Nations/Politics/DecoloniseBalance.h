#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class DecoloniseBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DecoloniseBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "DecoloniseBalance") {}
    public:
        float OddsBase() const { return ReadStaticField<float>("OddsBase"); }
        float OddsPressure() const { return ReadStaticField<float>("OddsPressure"); }
        float OddsGrievance() const { return ReadStaticField<float>("OddsGrievance"); }
        float OddsShare() const { return ReadStaticField<float>("OddsShare"); }
        float OddsShareFull() const { return ReadStaticField<float>("OddsShareFull"); }
        float OddsAutocracy() const { return ReadStaticField<float>("OddsAutocracy"); }
        float OddsKinRealm() const { return ReadStaticField<float>("OddsKinRealm"); }
        float OddsPerCaller() const { return ReadStaticField<float>("OddsPerCaller"); }
        float OddsCallersMax() const { return ReadStaticField<float>("OddsCallersMax"); }
        float FloorGrievance() const { return ReadStaticField<float>("FloorGrievance"); }
        float PressureKept() const { return ReadStaticField<float>("PressureKept"); }
        float CarryShare() const { return ReadStaticField<float>("CarryShare"); }
        float Gratitude() const { return ReadStaticField<float>("Gratitude"); }
        float ReleaseGrudge() const { return ReadStaticField<float>("ReleaseGrudge"); }
        float MaxFreedShare() const { return ReadStaticField<float>("MaxFreedShare"); }
        float RisingWindowYears() const { return ReadStaticField<float>("RisingWindowYears"); }
        float RisingFailOpinion() const { return ReadStaticField<float>("RisingFailOpinion"); }
        float RisingFailPressure() const { return ReadStaticField<float>("RisingFailPressure"); }
        float AiTakeUpPerYear() const { return ReadStaticField<float>("AiTakeUpPerYear"); }
        float AiHostileOpinion() const { return ReadStaticField<float>("AiHostileOpinion"); }
        float AiRisingPerYear() const { return ReadStaticField<float>("AiRisingPerYear"); }
        float AiRisingGrievance() const { return ReadStaticField<float>("AiRisingGrievance"); }
        float AiOwnPeopleScore() const { return ReadStaticField<float>("AiOwnPeopleScore"); }
    };
}
