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
        void origin(int value) const { WriteField<int>("origin", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        float share() const { return ReadField<float>("share"); }
        void share(float value) const { WriteField<float>("share", value); }
        float trust() const { return ReadField<float>("trust"); }
        void trust(float value) const { WriteField<float>("trust", value); }
        float drift() const { return ReadField<float>("drift"); }
        void drift(float value) const { WriteField<float>("drift", value); }
        int band() const { return ReadField<int>("band"); }
        void band(int value) const { WriteField<int>("band", value); }
        bool held() const { return ReadField<bool>("held"); }
        void held(bool value) const { WriteField<bool>("held", value); }
        void* demandName() const { return ReadField<void*>("demandName"); }
        void demandName(void* value) const { WriteField<void*>("demandName", value); }
        int demandUntil() const { return ReadField<int>("demandUntil"); }
        void demandUntil(int value) const { WriteField<int>("demandUntil", value); }
        void* answer() const { return ReadField<void*>("answer"); }
        void answer(void* value) const { WriteField<void*>("answer", value); }
        bool answerWorking() const { return ReadField<bool>("answerWorking"); }
        void answerWorking(bool value) const { WriteField<bool>("answerWorking", value); }
        int riseTick() const { return ReadField<int>("riseTick"); }
        void riseTick(int value) const { WriteField<int>("riseTick", value); }
        int homeland() const { return ReadField<int>("homeland"); }
        void homeland(int value) const { WriteField<int>("homeland", value); }
        int storyThread() const { return ReadField<int>("storyThread"); }
        void storyThread(int value) const { WriteField<int>("storyThread", value); }
        bool storyChoice() const { return ReadField<bool>("storyChoice"); }
        void storyChoice(bool value) const { WriteField<bool>("storyChoice", value); }
        float neglect() const { return ReadField<float>("neglect"); }
        void neglect(float value) const { WriteField<float>("neglect", value); }
        int urgency() const { return ReadField<int>("urgency"); }
        void urgency(int value) const { WriteField<int>("urgency", value); }
    };
}
