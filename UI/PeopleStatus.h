#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PeopleStatus : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeopleStatus(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PeopleStatus") {}
    public:
        int origin() const { return ReadField<int>("origin"); }
        void SetOrigin(int value) const { WriteField<int>("origin", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        float share() const { return ReadField<float>("share"); }
        void SetShare(float value) const { WriteField<float>("share", value); }
        float trust() const { return ReadField<float>("trust"); }
        void SetTrust(float value) const { WriteField<float>("trust", value); }
        float drift() const { return ReadField<float>("drift"); }
        void SetDrift(float value) const { WriteField<float>("drift", value); }
        int band() const { return ReadField<int>("band"); }
        void SetBand(int value) const { WriteField<int>("band", value); }
        bool held() const { return ReadField<bool>("held"); }
        void SetHeld(bool value) const { WriteField<bool>("held", value); }
        void* demandName() const { return ReadField<void*>("demandName"); }
        void SetDemandName(void* value) const { WriteField<void*>("demandName", value); }
        int demandUntil() const { return ReadField<int>("demandUntil"); }
        void SetDemandUntil(int value) const { WriteField<int>("demandUntil", value); }
        void* answer() const { return ReadField<void*>("answer"); }
        void SetAnswer(void* value) const { WriteField<void*>("answer", value); }
        bool answerWorking() const { return ReadField<bool>("answerWorking"); }
        void SetAnswerWorking(bool value) const { WriteField<bool>("answerWorking", value); }
        int riseTick() const { return ReadField<int>("riseTick"); }
        void SetRiseTick(int value) const { WriteField<int>("riseTick", value); }
        int homeland() const { return ReadField<int>("homeland"); }
        void SetHomeland(int value) const { WriteField<int>("homeland", value); }
        int storyThread() const { return ReadField<int>("storyThread"); }
        void SetStoryThread(int value) const { WriteField<int>("storyThread", value); }
        bool storyChoice() const { return ReadField<bool>("storyChoice"); }
        void SetStoryChoice(bool value) const { WriteField<bool>("storyChoice", value); }
        float neglect() const { return ReadField<float>("neglect"); }
        void SetNeglect(float value) const { WriteField<float>("neglect", value); }
        int urgency() const { return ReadField<int>("urgency"); }
        void SetUrgency(int value) const { WriteField<int>("urgency", value); }
    };
}
