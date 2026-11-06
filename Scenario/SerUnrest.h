#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerUnrest : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerUnrest(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerUnrest") {}
    public:
        int owner() const { return ReadField<int>("owner"); }
        void SetOwner(int value) const { WriteField<int>("owner", value); }
        int origin() const { return ReadField<int>("origin"); }
        void SetOrigin(int value) const { WriteField<int>("origin", value); }
        int trigger() const { return ReadField<int>("trigger"); }
        void SetTrigger(int value) const { WriteField<int>("trigger", value); }
        float meter() const { return ReadField<float>("meter"); }
        void SetMeter(float value) const { WriteField<float>("meter", value); }
        int countdownStartTick() const { return ReadField<int>("countdownStartTick"); }
        void SetCountdownStartTick(int value) const { WriteField<int>("countdownStartTick", value); }
        int riseTick() const { return ReadField<int>("riseTick"); }
        void SetRiseTick(int value) const { WriteField<int>("riseTick", value); }
        int crackdownUntilTick() const { return ReadField<int>("crackdownUntilTick"); }
        void SetCrackdownUntilTick(int value) const { WriteField<int>("crackdownUntilTick", value); }
        int payoffCount() const { return ReadField<int>("payoffCount"); }
        void SetPayoffCount(int value) const { WriteField<int>("payoffCount", value); }
        int lastPayoffTick() const { return ReadField<int>("lastPayoffTick"); }
        void SetLastPayoffTick(int value) const { WriteField<int>("lastPayoffTick", value); }
        bool cardPending() const { return ReadField<bool>("cardPending"); }
        void SetCardPending(bool value) const { WriteField<bool>("cardPending", value); }
        int storyThread() const { return ReadField<int>("storyThread"); }
        void SetStoryThread(int value) const { WriteField<int>("storyThread", value); }
    };
}
