#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class KinshipBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit KinshipBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "KinshipBalance") {}
    public:
        float AbroadMinShare() const { return ReadStaticField<float>("AbroadMinShare"); }
        float AbroadKeepShare() const { return ReadStaticField<float>("AbroadKeepShare"); }
        float AbroadTiesBase() const { return ReadStaticField<float>("AbroadTiesBase"); }
        float AbroadTiesGrievance() const { return ReadStaticField<float>("AbroadTiesGrievance"); }
        float AbroadTiesPersecuted() const { return ReadStaticField<float>("AbroadTiesPersecuted"); }
        float AbroadTiesMax() const { return ReadStaticField<float>("AbroadTiesMax"); }
        float RightsBase() const { return ReadStaticField<float>("RightsBase"); }
        float RightsTies() const { return ReadStaticField<float>("RightsTies"); }
        float RightsFear() const { return ReadStaticField<float>("RightsFear"); }
        float RightsPopular() const { return ReadStaticField<float>("RightsPopular"); }
        float RightsAutocracy() const { return ReadStaticField<float>("RightsAutocracy"); }
        float RightsPersecuted() const { return ReadStaticField<float>("RightsPersecuted"); }
        float RightsBigShare() const { return ReadStaticField<float>("RightsBigShare"); }
        float RightsBigMinority() const { return ReadStaticField<float>("RightsBigMinority"); }
        float RightsUnrest() const { return ReadStaticField<float>("RightsUnrest"); }
        float HomeRuleHard() const { return ReadStaticField<float>("HomeRuleHard"); }
        float RightsForgive() const { return ReadStaticField<float>("RightsForgive"); }
        float RightsTrust() const { return ReadStaticField<float>("RightsTrust"); }
        float CauseYears() const { return ReadStaticField<float>("CauseYears"); }
        float RefusedGrievance() const { return ReadStaticField<float>("RefusedGrievance"); }
        float AgitateGrievance() const { return ReadStaticField<float>("AgitateGrievance"); }
        float UnionBase() const { return ReadStaticField<float>("UnionBase"); }
        float UnionCloseKin() const { return ReadStaticField<float>("UnionCloseKin"); }
        float UnionDistant() const { return ReadStaticField<float>("UnionDistant"); }
        float LeagueEase() const { return ReadStaticField<float>("LeagueEase"); }
        float CousinTiesFloor() const { return ReadStaticField<float>("CousinTiesFloor"); }
        float AiPerYear() const { return ReadStaticField<float>("AiPerYear"); }
        float AiLeadRatio() const { return ReadStaticField<float>("AiLeadRatio"); }
        int AiPerCause() const { return ReadStaticField<int>("AiPerCause"); }
        float AiWarPerYear() const { return ReadStaticField<float>("AiWarPerYear"); }
        float AiRisingGrievance() const { return ReadStaticField<float>("AiRisingGrievance"); }
        float AiPressPlayerTies() const { return ReadStaticField<float>("AiPressPlayerTies"); }
        float AiPressPerYear() const { return ReadStaticField<float>("AiPressPerYear"); }
    };
}
