#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Progression
{
    class GoalAiInputs : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GoalAiInputs(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Progression", "GoalAiInputs") {}
    public:
        float expansionism() const { return ReadField<float>("expansionism"); }
        void SetExpansionism(float value) const { WriteField<float>("expansionism", value); }
        float aggression() const { return ReadField<float>("aggression"); }
        void SetAggression(float value) const { WriteField<float>("aggression", value); }
        float stability() const { return ReadField<float>("stability"); }
        void SetStability(float value) const { WriteField<float>("stability", value); }
        float unsettledShare() const { return ReadField<float>("unsettledShare"); }
        void SetUnsettledShare(float value) const { WriteField<float>("unsettledShare", value); }
        float ruledShare() const { return ReadField<float>("ruledShare"); }
        void SetRuledShare(float value) const { WriteField<float>("ruledShare", value); }
        bool ownPeople() const { return ReadField<bool>("ownPeople"); }
        void SetOwnPeople(bool value) const { WriteField<bool>("ownPeople", value); }
        float powerRatio() const { return ReadField<float>("powerRatio"); }
        void SetPowerRatio(float value) const { WriteField<float>("powerRatio", value); }
        float opinion() const { return ReadField<float>("opinion"); }
        void SetOpinion(float value) const { WriteField<float>("opinion", value); }
        bool atWar() const { return ReadField<bool>("atWar"); }
        void SetAtWar(bool value) const { WriteField<bool>("atWar", value); }
        bool deficit() const { return ReadField<bool>("deficit"); }
        void SetDeficit(bool value) const { WriteField<bool>("deficit", value); }
    };
}
