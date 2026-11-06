#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class UnifyBranch : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnifyBranch(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "UnifyBranch") {}
    public:
        int target() const { return ReadField<int>("target"); }
        void SetTarget(int value) const { WriteField<int>("target", value); }
        void* targetName() const { return ReadField<void*>("targetName"); }
        void SetTargetName(void* value) const { WriteField<void*>("targetName", value); }
        float ties() const { return ReadField<float>("ties"); }
        void SetTies(float value) const { WriteField<float>("ties", value); }
        float peakTies() const { return ReadField<float>("peakTies"); }
        void SetPeakTies(float value) const { WriteField<float>("peakTies", value); }
        int openedTick() const { return ReadField<int>("openedTick"); }
        void SetOpenedTick(int value) const { WriteField<int>("openedTick", value); }
        int lastWorkTick() const { return ReadField<int>("lastWorkTick"); }
        void SetLastWorkTick(int value) const { WriteField<int>("lastWorkTick", value); }
        int lastGainTick() const { return ReadField<int>("lastGainTick"); }
        void SetLastGainTick(int value) const { WriteField<int>("lastGainTick", value); }
        int status() const { return ReadField<int>("status"); }
        void SetStatus(int value) const { WriteField<int>("status", value); }
        int refusals() const { return ReadField<int>("refusals"); }
        void SetRefusals(int value) const { WriteField<int>("refusals", value); }
        int askAfterTick() const { return ReadField<int>("askAfterTick"); }
        void SetAskAfterTick(int value) const { WriteField<int>("askAfterTick", value); }
        int offer() const { return ReadField<int>("offer"); }
        void SetOffer(int value) const { WriteField<int>("offer", value); }
        int offerUntilTick() const { return ReadField<int>("offerUntilTick"); }
        void SetOfferUntilTick(int value) const { WriteField<int>("offerUntilTick", value); }
        void* offerEnding() const { return ReadField<void*>("offerEnding"); }
        void SetOfferEnding(void* value) const { WriteField<void*>("offerEnding", value); }
        void* endedWith() const { return ReadField<void*>("endedWith"); }
        void SetEndedWith(void* value) const { WriteField<void*>("endedWith", value); }
        int causeUntilTick() const { return ReadField<int>("causeUntilTick"); }
        void SetCauseUntilTick(int value) const { WriteField<int>("causeUntilTick", value); }
        int risingState() const { return ReadField<int>("risingState"); }
        void SetRisingState(int value) const { WriteField<int>("risingState", value); }
        int risingUntilTick() const { return ReadField<int>("risingUntilTick"); }
        void SetRisingUntilTick(int value) const { WriteField<int>("risingUntilTick", value); }
        float risingProgress() const { return ReadField<float>("risingProgress"); }
        void SetRisingProgress(float value) const { WriteField<float>("risingProgress", value); }
        int risingMonths() const { return ReadField<int>("risingMonths"); }
        void SetRisingMonths(int value) const { WriteField<int>("risingMonths", value); }
        int warTick() const { return ReadField<int>("warTick"); }
        void SetWarTick(int value) const { WriteField<int>("warTick", value); }
        int gov() const { return ReadField<int>("gov"); }
        void SetGov(int value) const { WriteField<int>("gov", value); }
        int epoch() const { return ReadField<int>("epoch"); }
        void SetEpoch(int value) const { WriteField<int>("epoch", value); }
        int nextDemandTick() const { return ReadField<int>("nextDemandTick"); }
        void SetNextDemandTick(int value) const { WriteField<int>("nextDemandTick", value); }
        int graceUntilTick() const { return ReadField<int>("graceUntilTick"); }
        void SetGraceUntilTick(int value) const { WriteField<int>("graceUntilTick", value); }
        void* refusalTicks() const { return ReadField<void*>("refusalTicks"); }
        int band() const { return ReadField<int>("band"); }
        void SetBand(int value) const { WriteField<int>("band", value); }
        int focus() const { return ReadField<int>("focus"); }
        void SetFocus(int value) const { WriteField<int>("focus", value); }
        bool abroad() const { return ReadField<bool>("abroad"); }
        void SetAbroad(bool value) const { WriteField<bool>("abroad", value); }
        void* steps() const { return ReadField<void*>("steps"); }
        void* reactions() const { return ReadField<void*>("reactions"); }
    };
}
