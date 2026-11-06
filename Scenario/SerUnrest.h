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
        void owner(int value) const { WriteField<int>("owner", value); }
        int origin() const { return ReadField<int>("origin"); }
        void origin(int value) const { WriteField<int>("origin", value); }
        int trigger() const { return ReadField<int>("trigger"); }
        void trigger(int value) const { WriteField<int>("trigger", value); }
        float meter() const { return ReadField<float>("meter"); }
        void meter(float value) const { WriteField<float>("meter", value); }
        int countdownStartTick() const { return ReadField<int>("countdownStartTick"); }
        void countdownStartTick(int value) const { WriteField<int>("countdownStartTick", value); }
        int riseTick() const { return ReadField<int>("riseTick"); }
        void riseTick(int value) const { WriteField<int>("riseTick", value); }
        int crackdownUntilTick() const { return ReadField<int>("crackdownUntilTick"); }
        void crackdownUntilTick(int value) const { WriteField<int>("crackdownUntilTick", value); }
        int payoffCount() const { return ReadField<int>("payoffCount"); }
        void payoffCount(int value) const { WriteField<int>("payoffCount", value); }
        int lastPayoffTick() const { return ReadField<int>("lastPayoffTick"); }
        void lastPayoffTick(int value) const { WriteField<int>("lastPayoffTick", value); }
        bool cardPending() const { return ReadField<bool>("cardPending"); }
        void cardPending(bool value) const { WriteField<bool>("cardPending", value); }
        int storyThread() const { return ReadField<int>("storyThread"); }
        void storyThread(int value) const { WriteField<int>("storyThread", value); }
    };
}
