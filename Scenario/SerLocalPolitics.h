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
        void format(int value) const { WriteField<int>("format", value); }
        int originTick() const { return ReadField<int>("originTick"); }
        void originTick(int value) const { WriteField<int>("originTick", value); }
        int histHead() const { return ReadField<int>("histHead"); }
        void histHead(int value) const { WriteField<int>("histHead", value); }
        int histFilled() const { return ReadField<int>("histFilled"); }
        void histFilled(int value) const { WriteField<int>("histFilled", value); }
        int lastSampleTick() const { return ReadField<int>("lastSampleTick"); }
        void lastSampleTick(int value) const { WriteField<int>("lastSampleTick", value); }
        int nextArcId() const { return ReadField<int>("nextArcId"); }
        void nextArcId(int value) const { WriteField<int>("nextArcId", value); }
        int nextRecordId() const { return ReadField<int>("nextRecordId"); }
        void nextRecordId(int value) const { WriteField<int>("nextRecordId", value); }
        int nextOfferId() const { return ReadField<int>("nextOfferId"); }
        void nextOfferId(int value) const { WriteField<int>("nextOfferId", value); }
        void* nations() const { return ReadField<void*>("nations"); }
        void nations(void* value) const { WriteField<void*>("nations", value); }
        void* sentiments() const { return ReadField<void*>("sentiments"); }
        void sentiments(void* value) const { WriteField<void*>("sentiments", value); }
        void* arcs() const { return ReadField<void*>("arcs"); }
        void arcs(void* value) const { WriteField<void*>("arcs", value); }
        void* leagues() const { return ReadField<void*>("leagues"); }
        void leagues(void* value) const { WriteField<void*>("leagues", value); }
        void* scrambles() const { return ReadField<void*>("scrambles"); }
        void scrambles(void* value) const { WriteField<void*>("scrambles", value); }
        void* episodes() const { return ReadField<void*>("episodes"); }
        void episodes(void* value) const { WriteField<void*>("episodes", value); }
        void* inbox() const { return ReadField<void*>("inbox"); }
        void inbox(void* value) const { WriteField<void*>("inbox", value); }
        void* localWarTicks() const { return ReadField<void*>("localWarTicks"); }
        void localWarTicks(void* value) const { WriteField<void*>("localWarTicks", value); }
        void* localWars() const { return ReadField<void*>("localWars"); }
        void localWars(void* value) const { WriteField<void*>("localWars", value); }
        void* offers() const { return ReadField<void*>("offers"); }
        void offers(void* value) const { WriteField<void*>("offers", value); }
    };
}
