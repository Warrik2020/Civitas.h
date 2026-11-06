#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class AiSkill : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AiSkill(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "AiSkill") {}
    public:
        void* From(void* d) const { void* args[] = { d }; return CallStatic("From", args, 1); }
        float pushBar() const { return ReadField<float>("pushBar"); }
        void SetPushBar(float value) const { WriteField<float>("pushBar", value); }
        float attackOdds() const { return ReadField<float>("attackOdds"); }
        void SetAttackOdds(float value) const { WriteField<float>("attackOdds", value); }
        float counterOdds() const { return ReadField<float>("counterOdds"); }
        void SetCounterOdds(float value) const { WriteField<float>("counterOdds", value); }
        int thrusts() const { return ReadField<int>("thrusts"); }
        void SetThrusts(int value) const { WriteField<int>("thrusts", value); }
        bool pincers() const { return ReadField<bool>("pincers"); }
        void SetPincers(bool value) const { WriteField<bool>("pincers", value); }
        float thrustShare() const { return ReadField<float>("thrustShare"); }
        void SetThrustShare(float value) const { WriteField<float>("thrustShare", value); }
        float thrustOddsMul() const { return ReadField<float>("thrustOddsMul"); }
        void SetThrustOddsMul(float value) const { WriteField<float>("thrustOddsMul", value); }
        float threatExtra() const { return ReadField<float>("threatExtra"); }
        void SetThreatExtra(float value) const { WriteField<float>("threatExtra", value); }
        float reserveShare() const { return ReadField<float>("reserveShare"); }
        void SetReserveShare(float value) const { WriteField<float>("reserveShare", value); }
        float fallbackOn() const { return ReadField<float>("fallbackOn"); }
        void SetFallbackOn(float value) const { WriteField<float>("fallbackOn", value); }
        float fallbackOff() const { return ReadField<float>("fallbackOff"); }
        void SetFallbackOff(float value) const { WriteField<float>("fallbackOff", value); }
        float fallbackOrg() const { return ReadField<float>("fallbackOrg"); }
        void SetFallbackOrg(float value) const { WriteField<float>("fallbackOrg", value); }
        float pressPlanning() const { return ReadField<float>("pressPlanning"); }
        void SetPressPlanning(float value) const { WriteField<float>("pressPlanning", value); }
        float exposedOdds() const { return ReadField<float>("exposedOdds"); }
        void SetExposedOdds(float value) const { WriteField<float>("exposedOdds", value); }
        float guardCover() const { return ReadField<float>("guardCover"); }
        void SetGuardCover(float value) const { WriteField<float>("guardCover", value); }
        float peaceCover() const { return ReadField<float>("peaceCover"); }
        void SetPeaceCover(float value) const { WriteField<float>("peaceCover", value); }
        bool garrisonCapital() const { return ReadField<bool>("garrisonCapital"); }
        void SetGarrisonCapital(bool value) const { WriteField<bool>("garrisonCapital", value); }
        bool attackHard() const { return ReadField<bool>("attackHard"); }
        void SetAttackHard(bool value) const { WriteField<bool>("attackHard", value); }
    };
}
