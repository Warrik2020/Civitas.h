#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Player
{
    class PlayerRecruitEase : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PlayerRecruitEase(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Player", "PlayerRecruitEase") {}
    public:
        bool Applies(void* it) const { void* args[] = { it }; return CallStaticValue<bool>("Applies", args, 1); }
        float GoldMul() const { return ReadStaticField<float>("GoldMul"); }
        float BuildTimeMul() const { return ReadStaticField<float>("BuildTimeMul"); }
        float ManpowerCapMul() const { return ReadStaticField<float>("ManpowerCapMul"); }
        float ManpowerCapBonus() const { return ReadStaticField<float>("ManpowerCapBonus"); }
        float ManpowerIntakeMul() const { return ReadStaticField<float>("ManpowerIntakeMul"); }
        float ManpowerIntakeBonusPerTick() const { return ReadStaticField<float>("ManpowerIntakeBonusPerTick"); }
        bool KitForMusterOnly() const { return ReadStaticField<bool>("KitForMusterOnly"); }
    };
}
