#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::States
{
    class StateLoyaltyTerms : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StateLoyaltyTerms(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.States", "StateLoyaltyTerms") {}
    public:
        float foreignPeople() const { return ReadField<float>("foreignPeople"); }
        void foreignPeople(float value) const { WriteField<float>("foreignPeople", value); }
        float standing() const { return ReadField<float>("standing"); }
        void standing(float value) const { WriteField<float>("standing", value); }
        float unsettled() const { return ReadField<float>("unsettled"); }
        void unsettled(float value) const { WriteField<float>("unsettled", value); }
        float taxPressure() const { return ReadField<float>("taxPressure"); }
        void taxPressure(float value) const { WriteField<float>("taxPressure", value); }
        float lordAmbition() const { return ReadField<float>("lordAmbition"); }
        void lordAmbition(float value) const { WriteField<float>("lordAmbition", value); }
        float tightening() const { return ReadField<float>("tightening"); }
        void tightening(float value) const { WriteField<float>("tightening", value); }
        float borderWar() const { return ReadField<float>("borderWar"); }
        void borderWar(float value) const { WriteField<float>("borderWar", value); }
        float unhappiness() const { return ReadField<float>("unhappiness"); }
        void unhappiness(float value) const { WriteField<float>("unhappiness", value); }
        float treasury() const { return ReadField<float>("treasury"); }
        void treasury(float value) const { WriteField<float>("treasury", value); }
        float welfare() const { return ReadField<float>("welfare"); }
        void welfare(float value) const { WriteField<float>("welfare", value); }
        float faith() const { return ReadField<float>("faith"); }
        void faith(float value) const { WriteField<float>("faith", value); }
        float levies() const { return ReadField<float>("levies"); }
        void levies(float value) const { WriteField<float>("levies", value); }
        float polity() const { return ReadField<float>("polity"); }
        void polity(float value) const { WriteField<float>("polity", value); }
        float warWeariness() const { return ReadField<float>("warWeariness"); }
        void warWeariness(float value) const { WriteField<float>("warWeariness", value); }
        float nobles() const { return ReadField<float>("nobles"); }
        void nobles(float value) const { WriteField<float>("nobles", value); }
        float occupation() const { return ReadField<float>("occupation"); }
        void occupation(float value) const { WriteField<float>("occupation", value); }
    };
}
