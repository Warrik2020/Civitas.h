#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerLocalPolitics : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerLocalPolitics(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerLocalPolitics") {}
    public:
        int format() const { return ReadField<int>("format"); }
        void SetFormat(int value) const { WriteField<int>("format", value); }
        int originTick() const { return ReadField<int>("originTick"); }
        void SetOriginTick(int value) const { WriteField<int>("originTick", value); }
        int histHead() const { return ReadField<int>("histHead"); }
        void SetHistHead(int value) const { WriteField<int>("histHead", value); }
        int histFilled() const { return ReadField<int>("histFilled"); }
        void SetHistFilled(int value) const { WriteField<int>("histFilled", value); }
        int lastSampleTick() const { return ReadField<int>("lastSampleTick"); }
        void SetLastSampleTick(int value) const { WriteField<int>("lastSampleTick", value); }
        int nextArcId() const { return ReadField<int>("nextArcId"); }
        void SetNextArcId(int value) const { WriteField<int>("nextArcId", value); }
        int nextRecordId() const { return ReadField<int>("nextRecordId"); }
        void SetNextRecordId(int value) const { WriteField<int>("nextRecordId", value); }
        int nextOfferId() const { return ReadField<int>("nextOfferId"); }
        void SetNextOfferId(int value) const { WriteField<int>("nextOfferId", value); }
        void* nations() const { return ReadField<void*>("nations"); }
        void SetNations(void* value) const { WriteField<void*>("nations", value); }
        void* sentiments() const { return ReadField<void*>("sentiments"); }
        void SetSentiments(void* value) const { WriteField<void*>("sentiments", value); }
        void* arcs() const { return ReadField<void*>("arcs"); }
        void SetArcs(void* value) const { WriteField<void*>("arcs", value); }
        void* leagues() const { return ReadField<void*>("leagues"); }
        void SetLeagues(void* value) const { WriteField<void*>("leagues", value); }
        void* scrambles() const { return ReadField<void*>("scrambles"); }
        void SetScrambles(void* value) const { WriteField<void*>("scrambles", value); }
        void* episodes() const { return ReadField<void*>("episodes"); }
        void SetEpisodes(void* value) const { WriteField<void*>("episodes", value); }
        void* inbox() const { return ReadField<void*>("inbox"); }
        void SetInbox(void* value) const { WriteField<void*>("inbox", value); }
        void* localWarTicks() const { return ReadField<void*>("localWarTicks"); }
        void SetLocalWarTicks(void* value) const { WriteField<void*>("localWarTicks", value); }
        void* localWars() const { return ReadField<void*>("localWars"); }
        void SetLocalWars(void* value) const { WriteField<void*>("localWars", value); }
        void* offers() const { return ReadField<void*>("offers"); }
        void SetOffers(void* value) const { WriteField<void*>("offers", value); }
    };
}
