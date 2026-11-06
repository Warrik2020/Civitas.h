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
        void* From(void* d) const { void* __callArgs[] = { d }; return CallStatic("From", __callArgs, 1); }
        float pushBar() const { return ReadField<float>("pushBar"); }
        void pushBar(float value) const { WriteField<float>("pushBar", value); }
        float attackOdds() const { return ReadField<float>("attackOdds"); }
        void attackOdds(float value) const { WriteField<float>("attackOdds", value); }
        float counterOdds() const { return ReadField<float>("counterOdds"); }
        void counterOdds(float value) const { WriteField<float>("counterOdds", value); }
        int thrusts() const { return ReadField<int>("thrusts"); }
        void thrusts(int value) const { WriteField<int>("thrusts", value); }
        bool pincers() const { return ReadField<bool>("pincers"); }
        void pincers(bool value) const { WriteField<bool>("pincers", value); }
        float thrustShare() const { return ReadField<float>("thrustShare"); }
        void thrustShare(float value) const { WriteField<float>("thrustShare", value); }
        float thrustOddsMul() const { return ReadField<float>("thrustOddsMul"); }
        void thrustOddsMul(float value) const { WriteField<float>("thrustOddsMul", value); }
        float threatExtra() const { return ReadField<float>("threatExtra"); }
        void threatExtra(float value) const { WriteField<float>("threatExtra", value); }
        float reserveShare() const { return ReadField<float>("reserveShare"); }
        void reserveShare(float value) const { WriteField<float>("reserveShare", value); }
        float fallbackOn() const { return ReadField<float>("fallbackOn"); }
        void fallbackOn(float value) const { WriteField<float>("fallbackOn", value); }
        float fallbackOff() const { return ReadField<float>("fallbackOff"); }
        void fallbackOff(float value) const { WriteField<float>("fallbackOff", value); }
        float fallbackOrg() const { return ReadField<float>("fallbackOrg"); }
        void fallbackOrg(float value) const { WriteField<float>("fallbackOrg", value); }
        float pressPlanning() const { return ReadField<float>("pressPlanning"); }
        void pressPlanning(float value) const { WriteField<float>("pressPlanning", value); }
        float exposedOdds() const { return ReadField<float>("exposedOdds"); }
        void exposedOdds(float value) const { WriteField<float>("exposedOdds", value); }
        float guardCover() const { return ReadField<float>("guardCover"); }
        void guardCover(float value) const { WriteField<float>("guardCover", value); }
        float peaceCover() const { return ReadField<float>("peaceCover"); }
        void peaceCover(float value) const { WriteField<float>("peaceCover", value); }
        bool garrisonCapital() const { return ReadField<bool>("garrisonCapital"); }
        void garrisonCapital(bool value) const { WriteField<bool>("garrisonCapital", value); }
        bool attackHard() const { return ReadField<bool>("attackHard"); }
        void attackHard(bool value) const { WriteField<bool>("attackHard", value); }
    };
}
