#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerUnifyBranch : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerUnifyBranch(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerUnifyBranch") {}
    public:
        int target() const { return ReadField<int>("target"); }
        void target(int value) const { WriteField<int>("target", value); }
        void* targetName() const { return ReadField<void*>("targetName"); }
        void targetName(void* value) const { WriteField<void*>("targetName", value); }
        float ties() const { return ReadField<float>("ties"); }
        void ties(float value) const { WriteField<float>("ties", value); }
        float peakTies() const { return ReadField<float>("peakTies"); }
        void peakTies(float value) const { WriteField<float>("peakTies", value); }
        int openedTick() const { return ReadField<int>("openedTick"); }
        void openedTick(int value) const { WriteField<int>("openedTick", value); }
        int lastWorkTick() const { return ReadField<int>("lastWorkTick"); }
        void lastWorkTick(int value) const { WriteField<int>("lastWorkTick", value); }
        int lastGainTick() const { return ReadField<int>("lastGainTick"); }
        void lastGainTick(int value) const { WriteField<int>("lastGainTick", value); }
        int status() const { return ReadField<int>("status"); }
        void status(int value) const { WriteField<int>("status", value); }
        int refusals() const { return ReadField<int>("refusals"); }
        void refusals(int value) const { WriteField<int>("refusals", value); }
        int askAfterTick() const { return ReadField<int>("askAfterTick"); }
        void askAfterTick(int value) const { WriteField<int>("askAfterTick", value); }
        int offer() const { return ReadField<int>("offer"); }
        void offer(int value) const { WriteField<int>("offer", value); }
        int offerUntilTick() const { return ReadField<int>("offerUntilTick"); }
        void offerUntilTick(int value) const { WriteField<int>("offerUntilTick", value); }
        void* offerEnding() const { return ReadField<void*>("offerEnding"); }
        void offerEnding(void* value) const { WriteField<void*>("offerEnding", value); }
        void* endedWith() const { return ReadField<void*>("endedWith"); }
        void endedWith(void* value) const { WriteField<void*>("endedWith", value); }
        int causeUntilTick() const { return ReadField<int>("causeUntilTick"); }
        void causeUntilTick(int value) const { WriteField<int>("causeUntilTick", value); }
        int risingState() const { return ReadField<int>("risingState"); }
        void risingState(int value) const { WriteField<int>("risingState", value); }
        int risingUntilTick() const { return ReadField<int>("risingUntilTick"); }
        void risingUntilTick(int value) const { WriteField<int>("risingUntilTick", value); }
        float risingProgress() const { return ReadField<float>("risingProgress"); }
        void risingProgress(float value) const { WriteField<float>("risingProgress", value); }
        int risingMonths() const { return ReadField<int>("risingMonths"); }
        void risingMonths(int value) const { WriteField<int>("risingMonths", value); }
        int warTick() const { return ReadField<int>("warTick"); }
        void warTick(int value) const { WriteField<int>("warTick", value); }
        int gov() const { return ReadField<int>("gov"); }
        void gov(int value) const { WriteField<int>("gov", value); }
        int epoch() const { return ReadField<int>("epoch"); }
        void epoch(int value) const { WriteField<int>("epoch", value); }
        int nextDemandTick() const { return ReadField<int>("nextDemandTick"); }
        void nextDemandTick(int value) const { WriteField<int>("nextDemandTick", value); }
        int graceUntilTick() const { return ReadField<int>("graceUntilTick"); }
        void graceUntilTick(int value) const { WriteField<int>("graceUntilTick", value); }
        void* refusalTicks() const { return ReadField<void*>("refusalTicks"); }
        void refusalTicks(void* value) const { WriteField<void*>("refusalTicks", value); }
        int band() const { return ReadField<int>("band"); }
        void band(int value) const { WriteField<int>("band", value); }
        int focus() const { return ReadField<int>("focus"); }
        void focus(int value) const { WriteField<int>("focus", value); }
        bool abroad() const { return ReadField<bool>("abroad"); }
        void abroad(bool value) const { WriteField<bool>("abroad", value); }
        void* steps() const { return ReadField<void*>("steps"); }
        void steps(void* value) const { WriteField<void*>("steps", value); }
        void* reactions() const { return ReadField<void*>("reactions"); }
        void reactions(void* value) const { WriteField<void*>("reactions", value); }
    };
}
